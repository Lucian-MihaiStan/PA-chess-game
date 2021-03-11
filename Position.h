#ifndef PA_CHESS_GAME_POSITION
#define PA_CHESS_GAME_POSITION

#include <string>

using namespace std;

class Position {
private:
    char column;
    int line;

public:
	int getLine();
	char getColumn();
	void setLine(int l);
	void setColumn(char c);
	string toString();
};


#endif