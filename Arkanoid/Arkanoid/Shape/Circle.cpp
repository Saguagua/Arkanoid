#include <framework.h>
#include "Circle.h"

Circle::Circle()
	:Shape(), _radius(10.0f)
{
}

Circle::Circle(Vector2<float> center, float radius)
	:Shape(center), _radius(radius)
{
}

Circle::~Circle()
{
}

void Circle::Render(HDC hdc)
{
	SelectObject(hdc, _brushes[0]);

	int left = _center.x - _radius;
	int right = _center.x + _radius;
	int top = _center.y - _radius;
	int bottom = _center.y + _radius;

	Ellipse(hdc, left, top, right, bottom);
}
