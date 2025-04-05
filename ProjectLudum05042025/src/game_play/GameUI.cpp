#include "GameUI.h"
namespace LudumGame
{
	namespace UI
	{
		void UI_Element::SetPosition(UI_Position newPos)
		{
			space.position = newPos;
		}

		void UI_Element::SetPosition(int newX, int newY)
		{
			space.position.x = newX;
			space.position.y = newY;
		}

		void UI_Element::SetRotation(UI_Rotation newRot)
		{
			space.rotation = newRot;
		}

		void UI_Element::SetRotation(int newRotX, int newRotY, int newRotZ)
		{
			space.rotation.x = newRotX;
			space.rotation.y = newRotY;
			space.rotation.z = newRotZ;
		}

		void UI_Element::SetScale(UI_Scale newScale)
		{
			space.scale = newScale;
		}

		void UI_Element::SetScale(int newScaleX, int newScaleY)
		{
			space.scale.x = newScaleX;
			space.scale.y = newScaleY;
		}

		void UI_Element::SetDimentions(UI_Dimentions newDim)
		{
			dimentions = newDim;
		}

		void UI_Element::SetDimentions(int newWidth, int newHeight)
		{
			dimentions.height = newHeight;
			dimentions.width = newWidth;
		}

		void UI_Element::SetColor(UI_Color newColor)
		{
			color = newColor;
		}

		void UI_Element::SetColor(int r, int g, int b, int a)
		{
			color.a = a;
			color.r = r;
			color.g = g;
			color.b = b;
		}

		UI_Position LudumGame::UI::UI_Element::GetPosition()
		{
			return UI_Position();
		}
		UI_Rotation UI_Element::GetRotation()
		{
			return UI_Rotation();
		}
		UI_Scale UI_Element::GetScale()
		{
			return UI_Scale();
		}
		UI_Space UI_Element::GetSpace()
		{
			return UI_Space();
		}
		UI_Dimentions UI_Element::GetDimentions()
		{
			return UI_Dimentions();
		}
		UI_Color UI_Element::GetColor()
		{
			return UI_Color();
		}
	}
}

