#include "framework.h"

#include "Scene/ArkanoidScene.h"

#include "Program.h"

HDC Program::backBuffer = nullptr;
Program::Program()
{
	HDC hdc = GetDC(hWnd);

	backBuffer = CreateCompatibleDC(hdc);
	hBit = CreateCompatibleBitmap(hdc, WIN_WIDTH, WIN_HEIGHT);
	SelectObject(backBuffer, hBit);

	_scene = make_shared<ArkanoidScene>();
}

Program::~Program()
{
	DeleteObject(backBuffer);
	DeleteObject(hBit);
}

void Program::Render(HDC hdc)
{
	PatBlt(backBuffer, 0, 0, WIN_WIDTH, WIN_HEIGHT, BLACKNESS);

	_scene->Render(backBuffer);
	BitBlt(
		hdc,
		0, 0, WIN_WIDTH, WIN_HEIGHT,
		backBuffer, 0, 0,
		SRCCOPY
	);
}

void Program::Update()
{
	_scene->Update();
}
