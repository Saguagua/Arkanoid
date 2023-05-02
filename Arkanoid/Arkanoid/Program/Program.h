#pragma once

class Program
{
public:
	Program();
	~Program();

	void Render(HDC hdc);
	void Update();
private:
	shared_ptr<Scene> _scene;
};

