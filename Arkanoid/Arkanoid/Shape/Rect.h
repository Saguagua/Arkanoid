#pragma once
class Rect:public Shape
{
public:
	Rect();
	Rect(Vector2<float> _center, Vector2<float> _diameter);
	~Rect();


	// Shape��(��) ���� ��ӵ�
	virtual void Render(HDC hdc) override;

private:
	Vector2<float> _diameter;
};

