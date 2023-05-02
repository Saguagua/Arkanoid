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

void Rect::Render(HDC hdc)
{
}
