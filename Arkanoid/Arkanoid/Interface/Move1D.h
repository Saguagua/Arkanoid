#pragma once
class Move1D:public MoveAble
{
public:
	Move1D(float speed) :MoveAble(speed) {}

	virtual Vector2<float> Move(Vector2<float> pos, Vector2<float> direction) override
	{
		pos.x += (direction.x * _speed);
		return pos;
	}
};

