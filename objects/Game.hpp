#pragma once
#include <raylib.h>
#include <stdio.h>

#include "Board.hpp"

class Game
{ 
  private:

  public:
    int s;

    Game(int size);

    void mainLoop();

    const bool isRunning();
};

