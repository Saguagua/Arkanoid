#include "framework.h"
#include "RectCollider.h"

RectCollider::RectCollider()
	:Collider(), _diameter(Vector2<float>(0, 0))
{
	_type = Collider::Type::RECT;
}

RectCollider::RectCollider(Vector2<float> center, Vector2<float> diameter)
{
	_center = center;
	_diameter = diameter;
	_type = Collider::Type::RECT;
}

RectCollider::~RectCollider()
{
}

float RectCollider::GetLeft()
{
	return _center.x - _diameter.x;
}

float RectCollider::GetRight()
{
	return _center.x + _diameter.x;
}

float RectCollider::GetTop()
{
	return _center.y - _diameter.y;
}

float RectCollider::GetBottom()
{
	return _center.y + _diameter.y;
}

bool RectCollider::VectorCollision(Vector2<float> other)
{
	return false;
}

bool RectCollider::CicleCollision(shared_ptr<CircleCollider> other)
{
	float radius = other->GetRadius();
	Vector2<float> otherCenter = other->GetCenter();
	float left = GetLeft();
	float right = GetRight();
	float bottom = GetBottom();
	float top = GetTop();

	if ((otherCenter.x > GetLeft() && otherCenter.x < GetRight())
		|| (otherCenter.y > GetTop() && otherCenter.y < GetBottom()))
	{
		if (GetTop() - radius > otherCenter.y)
			return false;
		if (GetBottom() + radius < otherCenter.y)
			return false;
		if (GetLeft() - radius > otherCenter.x)
			return false;
		if (GetRight() + radius < otherCenter.x)
			return false;

		return true;
	}
	else
	{
		if (other->VectorCollision(Vector2<float>(GetLeft(), GetTop())))
			return true; 
		if (other->VectorCollision(Vector2<float>(GetLeft(), GetBottom())))
			return true;
		if (other->VectorCollision(Vector2<float>(GetRight(), GetTop())))
			return true;
		if (other->VectorCollision(Vector2<float>(GetRight(), GetBottom())))
			return true;
	}
	
	return false;
}

bool RectCollider::RecCollision(shared_ptr<RectCollider> other)
{
	return false;
}
