#include "GameRun.h"

#include"game_play/GameUI.h"

namespace LudumGame
{
	namespace game_play
	{
		void RunGame()
		{

			Init();

			while (!WindowShouldClose())
			{
				Input();
				Update();
				Draw();
			}

			Close();
		}

		void Init()
		{
		
		}
		void Input()
		{
		
		}
		void Update()
		{
		
		}
		void Draw()
		{
			BeginDrawing();
			ClearBackground(BLACK);

			EndDrawing();
		}

		void Close()
		{
			CloseWindow();
		}
	}
}