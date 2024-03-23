#pragma once
#include <raylib.h>

class Board
{
	private:

	public:
		int winner = 0;
		int mvs[3][3];

		bool subd = false;

		Vector2 pos;
		Vector2 size;

		Board(int x, int y, int s);

		void move();
		void subdivide();
		void limitMvs();
		void checkWin();
		void win();

		void drawBoard();
};


