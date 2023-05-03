// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//
#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
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