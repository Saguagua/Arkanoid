#pragma once
class CircleCollision : public Collision
{
public:
	CircleCollision();
	~CircleCollision();

	void SetRadius(float radius);
	float GetRadius();

	// Collision��(��) ���� ��ӵ�
	virtual bool CicleCollision(shared_ptr<CircleCollision> other) override;
	virtual bool RecCollision(shared_ptr<RectCollision> other) override;
private:
	float _radius;
};

