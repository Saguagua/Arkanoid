#include "framework.h"

#include "Stages/Stage.h"
#include "Object/Player.h"
#include "Interface/Move2D.h"

#include "Ball.h"



Ball::Ball(shared_ptr<Object> player, weak_ptr<Stage> stage)
:Object(Vector2<float>(0,0))
{
	_player = player;
	_stage = stage;
	if (!_player.expired() && !_stage.expired())
	{
		_body = make_shared<Circle>();
		_collider = make_shared<CircleCollider>();
		_move = make_shared<Move2D>(10.0f);

		_body->SetColor(Shape::Color::COLORGREY);
	}
}

Ball::~Ball()
{
}

void Ball::Spawn(Vector2<float> startPos)
{
	_center = startPos;
	_center.y -= BALL_RADIUS;
	_body->SetCenter(_center);
	_collider->SetCenter(_center);
	_direction.x = 0;
	_direction.y = -1;
	_isActive = true;
}

void Ball::Reflect()
{
	if (!_isActive)
		return;

	if (_center.x - BALL_RADIUS <= 0 || _center.x + BALL_RADIUS >= WIN_WIDTH)
		_direction.x *= -1;
	
	if (_center.y - BALL_RADIUS <= 0)
		_direction.y *= -1;

	if (_center.y + BALL_RADIUS >= WIN_HEIGHT)
		_isActive = false;

	vector<vector<shared_ptr<Brick>>> bricks = _stage.lock()->GetAllBricks();

	for (int i = 0; i < bricks.size(); i++)
	{
		for (int j = 0; j < bricks[i].size(); j++)
		{
			if (IsCollision(bricks[i][j]))
			{
				_direction.y *= -1;
				bricks[i][j]->SetActive(false);
			}
		}
	}

	if (IsCollision(_player.lock()))
	{
		Vector2<float> direction = _center - _player.lock()->GetCenter();
		SetDirection(direction.Normal());
	}
	
}

void Ball::SetDirection(Vector2<float> direction)
{
	_direction = direction;
}

void Ball::Update()
{
	if (!_isActive)
		return;
	Reflect();
	Move(_direction);

	_body->SetCenter(_center);
	_collider->SetCenter(_center);
}

void Ball::Render(HDC hdc)
{
	if (!_isActive)
		return;
	Object::Render(hdc);
}