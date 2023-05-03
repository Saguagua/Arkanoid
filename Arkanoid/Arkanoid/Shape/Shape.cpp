#include "framework.h"
#include "Shape.h"

Shape::Shape():_center(Vector2<float>(0,0))
{
    CreateBrushes();
}

Shape::Shape(Vector2<float> center)
    :_center(center)
{
    CreateBrushes();
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

void Shape::SetCenter(const Vector2<float>& center)
{
    _center = center;
}

void Shape::SetColor(Color color)
{
    _brushIndex = static_cast<unsigned int>(color);
}

void Shape::CreateBrushes()
{
    HBRUSH red = CreateSolidBrush(RED);
    HBRUSH green = CreateSolidBrush(GREEN);
    HBRUSH blue = CreateSolidBrush(BLUE);
    HBRUSH black = CreateSolidBrush(BLACK);
    HBRUSH gray = CreateSolidBrush(GRAY);
    HBRUSH white = CreateSolidBrush(WHITE);

    _brushes.push_back(red);
    _brushes.push_back(green);
    _brushes.push_back(blue);
    _brushes.push_back(black);
    _brushes.push_back(gray);
    _brushes.push_back(white);
}


