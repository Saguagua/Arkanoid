#pragma once

class Program
{
public:
	Program();
	~Program();

	void Render(HDC hdc);
	void Update();

	static HDC backBuffer;

private:
	shared_ptr<Scene> _scene;

	HBITMAP hBit;
};

