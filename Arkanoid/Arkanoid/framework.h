// header.h: ǥ�� �ý��� ���� ����
// �Ǵ� ������Ʈ Ư�� ���� ������ ��� �ִ� ���� �����Դϴ�.
//
#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
// Windows ��� ����
#include <windows.h>
// C ��Ÿ�� ��� �����Դϴ�.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

//Math
#include "Math/Vector2.h"

//Interface
#include "Interface/MoveAble.h"

//Collision
#include "Collider/Collider.h"
#include "Collider/CircleCollider.h"
#include "Collider/RectCollider.h"

//Shape
#include "Shape/Shape.h"
#include "Shape/Circle.h"
#include "Shape/Rect.h"

//Object
#include "Object/Object.h"
#include "Object/Ball.h"
#include "Object/Player.h"
#include "Object/Brick.h"

//Stage
#include "Stages/Stage.h"

//Scene
#include "Scene/Scene.h"

//Program
#include "Program/Program.h"

#include "Types.h"

extern HWND hWnd;