#pragma once
class Brick:public Object
{
public:
	Brick(Vector2<float> center);
	~Brick();


	// Object��(��) ���� ��ӵ�
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
private:

};

