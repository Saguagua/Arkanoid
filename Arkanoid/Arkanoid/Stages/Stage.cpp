#include <framework.h>
#include "Stage.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::EraseBrick(Vector2<float> location)
{
	_bricks[location.y][location.x]->SetActive(false);
}

shared_ptr<Brick> Stage::GetBrick()
{
	return shared_ptr<Brick>();
}

vector<vector<shared_ptr<Brick>>>& Stage::GetAllBricks()
{
	return _bricks;
}

void Stage::Render(HDC hdc)
{
	for (int i = 0; i < _bricks.size(); i++)
	{
		for (int j = 0; j < _bricks[i].size(); j++)
		{
			_bricks[i][j]->Render(hdc);
		}
	}
}

void Stage::Update()
{
	for (int i = 0; i < _bricks.size(); i++)
	{
		for (int j = 0; j < _bricks[i].size(); j++)
		{
			_bricks[i][j]->Update();
		}
	}
}