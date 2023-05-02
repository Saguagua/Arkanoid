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

//Collision
#include "Collision/Collision.h"
#include "Collision/CircleCollision.h"
#include "Collision/RectCollision.h"

//Shape
#include "Shape/Shape.h"
#include "Shape/Circle.h"
#include "Shape/Rect.h"

//Object


//Stage
#include "Stages/Stage.h"

//Scene
#include "Scene/Scene.h"

//Program
#include "Program/Program.h"

#include "Types.h"