#pragma once
#include "GameUI.h"

#include "iostream"

namespace LudumGame
{
	namespace UI
	{
		//un texto
		class UI_Text : public UI_Element
		{
		private:
			std::string text;
			std::string font;

		public:

			UI_Text(std::string text, std::string font = "default");
			~UI_Text();

		};
	}
}
