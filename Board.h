#include


#ifndef PA_CHESS_GAME_BOARD
#define PA_CHESS_GAME_BOARD

using namespace std;

#define COL_LINE 8

class Board{
public:
    void initBoard();
    vector<vector<Piece>> getBoard();

private:
	vector<vector<Piece>> board;
};


#endif
