#pragma once
#include "iostream"
#include"raylib.h"

namespace LudumGame
{
    namespace UI
    {
        //Boton Panel Texto Slider Timer Barra
        struct UI_Position
        {
            int x;
            int y;
        };
        struct UI_Rotation
        {
            int x;
            int y;
            int z;
        };
        struct UI_Scale
        {
            int x;
            int y;
        };

        struct UI_Space
        {
            UI_Position position;
            UI_Rotation rotation;
            UI_Scale scale;
        };

        struct UI_Dimentions
        {
            int width;
            int height;
        };

        struct UI_Color
        {
            int r;
            int g;
            int b;
            int a;
        };

        class UI_Element
        {
        private:
            UI_Space space;
            UI_Dimentions dimentions;
            UI_Color color;

        public:
            std::string name;

            void SetPosition(UI_Position newPos);
            void SetPosition(int newX, int newY);
            void SetRotation(UI_Rotation newRot);
            void SetRotation(int newRotX, int newRotY, int newRotZ);
            void SetScale(UI_Scale newScale);
            void SetScale(int newScaleX, int newScaleY);
            void SetDimentions(UI_Dimentions newDim);
            void SetDimentions(int newWidth, int newHeight);

            void SetColor(UI_Color newColor);
            void SetColor(int r, int g, int b, int a);

            UI_Position GetPosition();
            UI_Rotation GetRotation();
            UI_Scale GetScale();
            UI_Space GetSpace();
            UI_Dimentions GetDimentions();
            UI_Color GetColor();
        };
    }
}