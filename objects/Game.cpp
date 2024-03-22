#include "Game.hpp"

Game::Game(int size)
{
  InitWindow(300 * size, 300 * size, "Game");
  SetTargetFPS(60);
}

const bool Game::isRunning() 
{
  return !WindowShouldClose();
}

void Game::mainLoop() 
{
  while(isRunning()) 
  {
    BeginDrawing();

    EndDrawing();
  }
}
