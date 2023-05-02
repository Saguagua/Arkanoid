#include "framework.h"
#include "Shape.h"

Shape::Shape():_center(Vector2<float>(0,0))
{
    CreateBrushes();
}

Shape::Shape(Vector2<float> center)
    :_center(center)
{
}

Shape::~Shape()
{
    for (HBRUSH brush : _brushes)
        DeleteObject(brush);
}

Vector2<float>& Shape::GetCenter()
{
    return _center;
}

void Shape::SetCenter(Vector2<float> center)
{
    _center = center;
}

void Shape::CreateBrushes()
{
    HBRUSH blue = CreateSolidBrush(BLUE);

    _brushes.push_back(blue);
}


