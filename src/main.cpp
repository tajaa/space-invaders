#include <raylib.h>
#include "game.hpp"

int main()
{
  Color grey = {29, 29, 27, 255};
  int windowWidth = 750;
  int windowHeight = 700;

  InitWindow(windowWidth, windowHeight, "C++ space invaders");
  SetTargetFPS(60);

  Game game;

 
  while(WindowShouldClose()==false){
      BeginDrawing();

      ClearBackground(grey);

      game.Draw();
  
      EndDrawing();
  }

  CloseWindow();
    }
