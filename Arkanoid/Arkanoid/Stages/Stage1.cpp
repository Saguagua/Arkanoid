#include "framework.h"
#include "Stage1.h"

void Stage1::CreateStage()
{
	Vector2<float> offset = {BRICK_X + 10, BRICK_Y * 2 };
	float a = BRICK_X;
	_bricks.resize(5);
	for (int i = 0; i < 5; i++)
	{
		_bricks[i].reserve(13);
		for (int j = 0; j < 13; j++)
		{
			Vector2<float> location = offset + Vector2<float>((BRICK_X * 2 + 1) * j, (BRICK_Y*2) * i);
			shared_ptr<Brick> brick = make_shared<Brick>(location);
			_bricks[i].push_back(brick);
		}
	}

}

Stage1::Stage1()
{
	CreateStage();
}

Stage1::~Stage1()
{
}
