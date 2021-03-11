
#ifndef PA_CHESS_GAME_POSITION
#define PA_CHESS_GAME_POSITION

#include "Board.h"
#include <string>

class Position{
private:
    char column;
    int line;

public:
	int getLine();
	char getColumn();
	void setLine(int l);
	void setColumn(char c);
	std::string toString();
};


#endif