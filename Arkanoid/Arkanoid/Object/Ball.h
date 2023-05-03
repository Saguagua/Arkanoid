#pragma once
class Stage;

class Ball: public Object
{
public:
	Ball(shared_ptr<Object> player, weak_ptr<Stage> stage);
	~Ball();

	void Spawn(Vector2<float> startPos);
	void Reflect();
	void SetDirection(Vector2<float> direction);
	// Object을(를) 통해 상속됨
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
	
private:
	Vector2<float> _direction = {0.0f, -1.0f};
	weak_ptr<Object> _player;
	weak_ptr<Stage> _stage;
};