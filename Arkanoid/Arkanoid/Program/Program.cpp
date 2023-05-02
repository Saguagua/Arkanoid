#include "framework.h"

#include "Scene/ArkanoidScene.h"

#include "Program.h"

Program::Program()
{
	_scene = make_shared<ArkanoidScene>();
}

Program::~Program()
{
}

void Program::Render(HDC hdc)
{
	_scene->Render(hdc);
}

void Program::Update()
{
	_scene->Update();
}
