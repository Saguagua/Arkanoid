#pragma once
class Shape
{
public:
	enum class Color
	{
		BLUE,
		RED,
		BLACK,
		GREY,
		WHITE
	};

	Shape();
	Shape(Vector2<float> center);
	~Shape();

	Vector2<float>& GetCenter();
	void SetCenter(Vector2<float> center);

	virtual void Render(HDC hdc) abstract;
protected:
	void CreateBrushes();
	vector<HBRUSH> _brushes;

	Vector2<float> _center;
	
};

