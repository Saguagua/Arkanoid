#include <framework.h>
#include "Rect.h"

Rect::Rect()
{
}

Rect::Rect(Vector2<float> center, Vector2<float> diameter)
	:Shape(center),_diameter(diameter)
{
}

Rect::~Rect()
{
}

Vector2<float> Rect::GetDiameter()
{
	return _diameter;
}

float Rect::GetLeft()
{
	return _center.x - _diameter.x;
}

float Rect::GetRight()
{
	return _center.x + _diameter.x;
}

float Rect::GetTop()
{
	return _center.y - _diameter.y;
}

float Rect::GetBottom()
{
	return _center.y + _diameter.y;
}

void Rect::Render(HDC hdc)
{
	SelectObject(hdc, _brushes[_brushIndex]);

	Rectangle(hdc, GetLeft(), GetTop(), GetRight(), GetBottom());
}
