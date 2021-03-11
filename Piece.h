#ifndef PA_CHESS_GAME_PIECE
#define PA_CHESS_GAME_PIECE

#include "Position.h"

class Piece{
private:
	bool isWhite;
	int points;
	Position* currentPos;

public:
    Piece(bool isWhite, int points, Position *currentPos);

    Piece();

    virtual void pulaaa() = 0;

	bool getIsWhite();
	//void setIsWhite(bool isWhite);

	int getPoints();
	//void setPoints(int points);
	
	Position *getCurrentPos();
	void setCurrentPos(Position *currentPos);
};


#endif