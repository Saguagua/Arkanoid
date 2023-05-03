#pragma once
struct MoveAble
{
public:
	MoveAble(float speed):_speed(speed) {}

	virtual Vector2<float> Move(Vector2<float> pos, Vector2<float> direction) abstract;

	float _speed;
};