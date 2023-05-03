#pragma once
class Circle: public Shape
{
public:
	Circle();
	Circle(Vector2<float> center, float radius);

	~Circle();

	float GetRadius();
	// Shape��(��) ���� ��ӵ�
	virtual void Render(HDC hdc) override;
private:
	float _radius;
};

