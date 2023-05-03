#include <framework.h>
#include "Collider.h"

Collider::Collider()
	:_center(Vector2<float>(0.0f,0.0f))
{
}

Collider::~Collider()
{
}

void Collider::SetCenter(Vector2<float>& center)
{
	_center = center;
}

Vector2<float>& Collider::GetCenter()
{
	return _center;
}


Collider::Type Collider::GetType()
{
	return _type;
}

bool Collider::IsCollision(shared_ptr<Collider> other)
{
	switch (other->GetType())
	{
	case Collider::Type::NONE:
	{
		return false;
		break;
	}
	case Collider::Type::CIRCLE:
	{
		return CicleCollision(dynamic_pointer_cast<CircleCollider>(other));
		break;
	}
	case Collider::Type::RECT:
	{
		return RecCollision(dynamic_pointer_cast<RectCollider>(other));
		break;
	}
	default:
		break;
	}
}