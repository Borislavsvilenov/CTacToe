#include "Game.hpp"





Game::Game(int s) : board(0, 0, s)
{
  InitWindow(900, 900, "Game");
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

		board.drawBoard();

    EndDrawing();
  }
}
