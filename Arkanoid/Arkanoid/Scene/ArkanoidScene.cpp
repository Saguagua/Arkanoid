#include "framework.h"

#include "Object/Brick.h"
#include "Stages/Stage1.h"

#include "ArkanoidScene.h"

ArkanoidScene::ArkanoidScene()
{
	_stage = make_shared<Stage1>();
	_player = make_shared<Player>(_stage);
	_player->CreateBalls();
}

ArkanoidScene::~ArkanoidScene()
{
}

void ArkanoidScene::Update()
{
	_player->Update();
}

void ArkanoidScene::Render(HDC hdc)
{
	_player->Render(hdc);
	_stage->Render(hdc);
}
