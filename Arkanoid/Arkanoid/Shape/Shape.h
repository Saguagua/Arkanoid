#pragma once
class Shape
{
public:
	enum class Color
	{
		COLORRED,
		COLORGREEN,
		COLORBLUE,
		COLORBLACK,
		COLORGREY,
		COLORWHITE
	};

	Shape();
	Shape(Vector2<float> center);
	~Shape();

	Vector2<float>& GetCenter();
	void SetCenter(const Vector2<float>& center);
	void SetColor(Shape::Color color);

	virtual void Render(HDC hdc) abstract;
protected:
	void CreateBrushes();
	vector<HBRUSH> _brushes;
	unsigned int _brushIndex = 0;

	Vector2<float> _center;
	
};

