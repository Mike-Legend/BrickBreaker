#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
#include "Console.h"

#define WINDOW_WIDTH 80
#define WINDOW_HEIGHT 40
#define FRAMES_PER_SECOND 15

#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new( _CLIENT_BLOCK, __FILE__, __LINE__)
#endif