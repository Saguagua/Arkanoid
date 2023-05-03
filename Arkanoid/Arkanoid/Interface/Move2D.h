#pragma once
struct Move2D: public MoveAble
{
public:
	Move2D(float speed):MoveAble(speed){}

	virtual Vector2<float> Move(Vector2<float> pos, Vector2<float> direction) override
	{
		return pos + (direction * _speed);
	}
};