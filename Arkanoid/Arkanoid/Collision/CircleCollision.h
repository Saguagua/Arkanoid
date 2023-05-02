#pragma once
class CircleCollision : public Collision
{
public:
	CircleCollision();
	~CircleCollision();

	void SetRadius(float radius);
	float GetRadius();

	// Collision을(를) 통해 상속됨
	virtual bool CicleCollision(shared_ptr<CircleCollision> other) override;
	virtual bool RecCollision(shared_ptr<RectCollision> other) override;
private:
	float _radius;
};

