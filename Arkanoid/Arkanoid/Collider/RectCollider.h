#pragma once
class RectCollider: public Collider
{
public:
	RectCollider();
	RectCollider(Vector2<float> center, Vector2<float> diameter);
	~RectCollider();

	float GetLeft();
	float GetRight();
	float GetTop();
	float GetBottom();

	// Collision을(를) 통해 상속됨
	virtual bool VectorCollision(Vector2<float> other) override;
	virtual bool CicleCollision(shared_ptr<CircleCollider> other) override;
	virtual bool RecCollision(shared_ptr<RectCollider> other) override;
private:
	Vector2<float> _diameter;
};