#pragma once
class Rect:public Shape
{
public:
	Rect();
	Rect(Vector2<float> _center, Vector2<float> _diameter);
	~Rect();

	Vector2<float> GetDiameter();
	float GetLeft();
	float GetRight();
	float GetTop();
	float GetBottom();

	// Shape��(��) ���� ��ӵ�
	virtual void Render(HDC hdc) override;

private:
	Vector2<float> _diameter;
};

