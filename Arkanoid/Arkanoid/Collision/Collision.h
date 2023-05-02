#pragma once

class CircleCollision;
class RectCollision;

class Collision
{
public:
	enum class Type
	{
		NONE,
		CIRCLE,
		RECT
	};

	Collision() : _center(Vector2<float>(0, 0)) {}
	~Collision() {}

	void SetCenter(Vector2<float> center);
	Vector2<float>& GetCenter();

	Collision::Type GetType();

	bool IsCollision(shared_ptr<Collision> other);
	virtual bool CicleCollision(shared_ptr<CircleCollision> other) abstract;
	virtual bool RecCollision(shared_ptr<RectCollision> other) abstract;

protected:
	Vector2<float> _center;
	Type _type = Type::NONE;
};

