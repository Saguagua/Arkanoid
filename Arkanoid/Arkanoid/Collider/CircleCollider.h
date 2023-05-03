#pragma once
class CircleCollider : public Collider, public enable_shared_from_this<CircleCollider>
{
public:
	CircleCollider();
	~CircleCollider();

	void SetRadius(float radius);
	float GetRadius();

	// Collision을(를) 통해 상속됨
	virtual bool VectorCollision(Vector2<float> other) override;
	virtual bool CicleCollision(shared_ptr<CircleCollider> other) override;
	virtual bool RecCollision(shared_ptr<RectCollider> other) override;
private:
	float _radius;
};

