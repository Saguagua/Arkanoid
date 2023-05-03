#pragma once
class Brick:public Object
{
public:
	Brick(Vector2<float> center);
	~Brick();


	// Object을(를) 통해 상속됨
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
private:

};

