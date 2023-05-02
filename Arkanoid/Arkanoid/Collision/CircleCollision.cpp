#include "framework.h"
#include "CircleCollision.h"

CircleCollision::CircleCollision()
	:_radius(10)
{
}

CircleCollision::~CircleCollision()
{
}

void CircleCollision::SetRadius(float radius)
{
	_radius = radius;
}

float CircleCollision::GetRadius()
{
	return _radius;
}

bool CircleCollision::CicleCollision(shared_ptr<CircleCollision> other)
{
	return _center.Length(other->GetCenter()) > _radius + other->GetRadius();
}

bool CircleCollision::RecCollision(shared_ptr<RectCollision> other)
{
	
	return false;
}
