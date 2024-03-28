#pragma once
#include <raylib.h>
#include <iostream>
#include <cmath>

class Board
{
	private:

	public:
		int winner = 0;
		int mvs[3][3];

		bool subd = false;
		Board* sub[3][3] = {};

		Vector2 pos;
		Vector2 size;

		Board(int x, int y, int s);
		~Board();

		bool move(Vector2 p, int player);
		void subdivide();
		void limitMvs();
		void checkWin();
		void win();

		void drawBoard();
		void drawX(Vector2 pos, int size);
		void drawO(Vector2 pos, int size);
};


