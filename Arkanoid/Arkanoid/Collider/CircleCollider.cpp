#include "framework.h"
#include "CircleCollider.h"

CircleCollider::CircleCollider()
	:_radius(10)
{

	_type = Collider::Type::CIRCLE;
}

CircleCollider::~CircleCollider()
{
}

void CircleCollider::SetRadius(float radius)
{
	_radius = radius;
}

float CircleCollider::GetRadius()
{
	return _radius;
}

bool CircleCollider::VectorCollision(Vector2<float> other)
{
	return _center.Length(other) < _radius;
}

bool CircleCollider::CicleCollision(shared_ptr<CircleCollider> other)
{
	return _center.Length(other->GetCenter()) > _radius + other->GetRadius();
}

bool CircleCollider::RecCollision(shared_ptr<RectCollider> other)
{
	return other->CicleCollision(shared_from_this());
}
