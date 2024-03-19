#pragma once
#include <raylib.h>
#include <iostream>

#include "Board.hpp"

class Game
{ 
  private:

  public:
    int s;

    Game(int size);

    void mainLoop();
};

