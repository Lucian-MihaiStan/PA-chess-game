#include <string>

#ifndef PA_CHESS_GAME_POSITION
#define PA_CHESS_GAME_POSITION


class Position{
private:
    char column;
    int line;

public:
	int getLine();
	int getColumn();
	void setLine(int l);
	void setColumn(char c);
	std::string toString();
};


#endif