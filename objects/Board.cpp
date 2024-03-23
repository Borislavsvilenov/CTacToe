#include "Board.hpp"

Board::Board(int x, int y, int s)
{
	pos.x = x; 
	pos.y = y;

	size.x = s;
	size.y = s;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			mvs[i][j] = 0;
		}
	}
}

Board::~Board()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			delete sub[i][j];
		}
	}
}

void Board::move()
{

}

void Board::subdivide()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			sub[i][j] = new Board(i * size.x/3, j * size.y/3, size.x/3);
		}
	}
}

void Board::limitMvs()
{

}

void Board::checkWin()
{

}

void Board::win()
{

}

void Board::drawBoard()
{
	int width = size.x / 50;
	DrawRectangle(pos.x + size.x/3 - width/2, pos.y, width, size.y, Color{255, 255, 255, 255});
	DrawRectangle(pos.x + 2*size.x/3 - width/2, pos.y, width, size.y, Color{255, 255, 255, 255});
	DrawRectangle(pos.x, pos.y + size.y/3 - width/2, size.x, width, Color{255, 255, 255, 255});
	DrawRectangle(pos.x, pos.y + 2*size.y/3 - width/2, size.x, width, Color{255, 255, 255, 255});
}


void Board::drawX(Vector2 pos, int size)
{
	DrawLineEx(pos, Vector2{pos.x + size, pos.y + size}, 5, WHITE);
	DrawLineEx(Vector2{pos.x + size, pos.y}, Vector2{pos.x, pos.y + size}, 5, WHITE);
}
