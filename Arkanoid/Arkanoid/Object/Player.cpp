#include "framework.h"

#include "Interface/Move1D.h"

#include "Player.h"

Player::Player(shared_ptr<Stage> stage)
	:Object(Vector2<float>(WIN_WIDTH / 2 - 30.0f, WIN_HEIGHT - 100.0f))
{
	_stage = stage;

	if (!_stage.expired())
	{
		_move = make_shared<Move1D>(10.0f);
		_body = make_shared<Rect>(_center, Vector2<float>(70.0f, 15.0f));
		_collider = make_shared<RectCollider>(_center, Vector2<float>(70.0f, 15.0f));

		_body->SetColor(Shape::Color::COLORBLUE);
	}
}

Player::~Player()
{
}

void Player::WaitForKey()
{
	if (GetAsyncKeyState('A'))
	{
		if (_isActive && 
			_center.x - dynamic_pointer_cast<Rect>(_body)->GetDiameter().x > 0)
		{
			Vector2<float> direction = Vector2<float>(-1, 0);
			Move(direction);
		}
	}
	if (GetAsyncKeyState('D'))
	{
		if (_isActive &&
			_center.x - dynamic_pointer_cast<Rect>(_body)->GetDiameter().x < WIN_WIDTH)
		{
			Vector2<float> direction = Vector2<float>(1, 0);
			
			Move(direction);
		}
	}
	if (GetAsyncKeyState(VK_SPACE))
	{
		if (!_isActive)
		{
			_isActive = true;
			_balls[0]->Spawn(_center);
		}
	}
}

vector<shared_ptr<Ball>> Player::GetBalls()
{
	return _balls;
}

void Player::Update()
{
	WaitForKey();
	_body->SetCenter(_center);
	_collider->SetCenter(_center);
	
	for (int i = 0; i < _balls.size(); i++)
	{
		_balls[i]->Update();
	}
}

void Player::Render(HDC hdc)
{
	for (int i = 0; i < _balls.size(); i++)
	{
		_balls[i]->Render(hdc);
	}

	Object::Render(hdc);
}

void Player::CreateBalls()
{
	for (int i = 0; i < 30; i++)
	{
		shared_ptr<Ball> ball = make_shared<Ball>(shared_from_this(), _stage);
		_balls.push_back(ball);
	}
}
