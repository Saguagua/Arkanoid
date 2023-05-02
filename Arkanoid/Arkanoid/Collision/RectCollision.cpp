#include "framework.h"
#include "RectCollision.h"

RectCollision::RectCollision()
	:Collision()
{
}

RectCollision::~RectCollision()
{
}

bool RectCollision::CicleCollision(shared_ptr<CircleCollision> other)
{
	return false;
}

bool RectCollision::RecCollision(shared_ptr<RectCollision> other)
{
	return false;
}
