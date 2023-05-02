#pragma once
class RectCollision: public Collision
{
public:
	RectCollision();
	~RectCollision();
	// Collision을(를) 통해 상속됨
	virtual bool CicleCollision(shared_ptr<CircleCollision> other) override;
	virtual bool RecCollision(shared_ptr<RectCollision> other) override;
private:
	
};