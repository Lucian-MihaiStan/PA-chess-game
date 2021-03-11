
#ifndef PA_CHESS_GAME_PIECE
#define PA_CHESS_GAME_PIECE

#include "Board.h"

class Piece{
private:
	bool isWhite;
	int points;
	Position *currentPos;

public:
	virtual void move();

	bool getIsWhite();
	void setIsWhite(bool isWhite);

	int getPoints();
	void setPoints(int points);
	
	Position *getCurrentPos();
	void setCurrentPos(Position *currentPos);;
};


#endif