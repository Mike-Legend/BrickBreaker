#include "stdafx.h"
#include "Game.h"
#include <chrono> // https://en.cppreference.com/w/cpp/chrono
#include <thread> // https://en.cppreference.com/w/cpp/thread
using namespace std::chrono;
float frameTimer = 1000.0f / FRAMES_PER_SECOND;

int main()
{
	srand((int)time(0));
	SetConsoleOutputCP(437); // use usa char set for drawing boxes
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Game game;
	while (true)
	{
		auto start = steady_clock::now();

		if (game.Update() == false)
			break;
		game.Render();

		if (GetAsyncKeyState(VK_UP) & 0x1)
			frameTimer-=5;

		if (GetAsyncKeyState(VK_DOWN) & 0x1)
			frameTimer+=5;

		auto end = steady_clock::now();
		auto durationMS = duration_cast<milliseconds>(end - start);
		auto timeLeft = frameTimer - durationMS.count();
		std::this_thread::sleep_for(milliseconds(int(timeLeft)));
	}
}