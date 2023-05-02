#include <framework.h>
#include "Collision.h"

void Collision::SetCenter(Vector2<float> center)
{
	_center = center;
}

Vector2<float>& Collision::GetCenter()
{
	return _center;
}


Collision::Type Collision::GetType()
{
	return _type;
}

bool Collision::IsCollision(shared_ptr<Collision> other)
{
	switch (other->GetType())
	{
	case Collision::Type::NONE:
	{
		return false;
		break;
	}
	case Collision::Type::CIRCLE:
	{
		return CicleCollision(dynamic_pointer_cast<CircleCollision>(other));
		break;
	}
	case Collision::Type::RECT:
	{
		return RecCollision(dynamic_pointer_cast<RectCollision>(other));
		break;
	}
	default:
		break;
	}
}