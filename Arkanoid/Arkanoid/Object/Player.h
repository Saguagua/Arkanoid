#pragma once
class Stage;

class Player: public Object, public enable_shared_from_this<Player>
{
public:
	Player(shared_ptr<Stage> stage);
	~Player();
	void WaitForKey();
	vector<shared_ptr<Ball>> GetBalls();
	// Object을(를) 통해 상속됨
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
	void CreateBalls();
private:
	weak_ptr<Stage> _stage;
	vector<shared_ptr<Ball>> _balls;
	//weak_ptr로 stage 잡기
};

