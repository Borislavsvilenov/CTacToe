#pragma once
#include <raylib.h>
#include <stdio.h>

#include "Board.hpp"

class Game
{ 
  private:

  public:
		int winner = 0;

		Board board;

    Game(int s);

    void mainLoop();

    const bool isRunning();
};

