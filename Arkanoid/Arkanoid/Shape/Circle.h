#pragma once
class Circle: public Shape
{
public:
	Circle();
	Circle(Vector2<float> center, float radius);
	~Circle();
	// Shape을(를) 통해 상속됨
	virtual void Render(HDC hdc) override;
private:
	float _radius;
};

