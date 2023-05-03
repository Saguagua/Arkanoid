#pragma once
class Stage
{
public:
	Stage();
	~Stage();

	void EraseBrick(Vector2<float> location);
	shared_ptr<Brick> GetBrick();
	vector<vector<shared_ptr<Brick>>>& GetAllBricks();

	void Render(HDC hdc);
	void Update();
	
protected:
	virtual void CreateStage() abstract;
	vector<vector<shared_ptr<Brick>>> _bricks;
};

