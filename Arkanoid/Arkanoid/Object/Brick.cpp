#include "framework.h"
#include "Brick.h"

Brick::Brick(Vector2<float> center)
	:Object(center)
{
	Vector2<float> diameter = Vector2<float>(BRICK_X, BRICK_Y);
	_body = make_shared<Rect>(center, diameter);
	_collider = make_shared<RectCollider>(center, diameter);

	_body->SetColor(Shape::Color::COLORWHITE);
	_isActive = true;
}

Brick::~Brick()
{
}

void Brick::Update()
{
}

void Brick::Render(HDC hdc)
{
	if (!_isActive)
		return;
	Object::Render(hdc);
}
