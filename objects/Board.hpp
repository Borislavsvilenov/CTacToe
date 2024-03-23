#pragma once
#include <raylib.h>

class Board
{
private:

public:
	int winner = 0;
	int mvs = [[0, 0, 0],
						 [0, 0, 0],
						 [0, 0, 0]];
	
	bool subd = false;

	Board();

	void move();
	void subdivide();
	void limitMvs();
	void checkWin();
	void win();

	void drawBoard();

};


