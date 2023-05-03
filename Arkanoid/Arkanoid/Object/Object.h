#pragma once
class Object
{
public:
	Object(Vector2<float> center);
	~Object();

	virtual void Update() abstract;
	virtual void Render(HDC hdc);
	
	shared_ptr<Shape> GetBody();
	Vector2<float> GetCenter();
	bool IsActive();
	shared_ptr<Collider> GetCollider();

	void SetCenter(Vector2<float> center); 
	void SetActive(bool active);
	
	void Move(Vector2<float>& direction);
	bool IsCollision(shared_ptr<Object> other);

protected:
	void SetColor(Shape::Color color);
	
	Vector2<float> _center;
	shared_ptr<Shape> _body;
	shared_ptr<Collider> _collider;

	shared_ptr<MoveAble> _move;
	bool _isActive = false;
};

