#include "framework.h"
#include "Object.h"

Object::Object(Vector2<float> center)
    :_center(center)
{
}

Object::~Object()
{
}

void Object::Render(HDC hdc)
{
    _body->Render(hdc);
}

void Object::Move(Vector2<float>& direction)
{
    _center = _move->Move(_center, direction);
}

shared_ptr<Shape> Object::GetBody()
{
    return _body;
}

Vector2<float> Object::GetCenter()
{
    return _center;
}

bool Object::IsActive()
{
    return _isActive;
}

shared_ptr<Collider> Object::GetCollider()
{
    return _collider;
}

void Object::SetCenter(Vector2<float> center)
{
    _center = center;
}

void Object::SetActive(bool active)
{
    _isActive = active;
}

bool Object::IsCollision(shared_ptr<Object> other)
{
    if (!_isActive || !other->IsActive())
        return false;
    return _collider->IsCollision(other->GetCollider());
}

void Object::SetColor(Shape::Color color)
{
    _body->SetColor(color);
}