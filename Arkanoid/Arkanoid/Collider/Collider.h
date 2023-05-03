#pragma once

class CircleCollider;
class RectCollider;

class Collider
{
public:
	enum class Type
	{
		NONE,
		CIRCLE,
		RECT
	};

	Collider();
	~Collider();

	void SetCenter(Vector2<float>& center);
	Vector2<float>& GetCenter();

	Collider::Type GetType();

	bool IsCollision(shared_ptr<Collider> other);
	virtual bool VectorCollision(Vector2<float> other) abstract;
	virtual bool CicleCollision(shared_ptr<CircleCollider> other) abstract;
	virtual bool RecCollision(shared_ptr<RectCollider> other) abstract;

protected:
	Vector2<float> _center;
	Type _type = Type::NONE;
};

