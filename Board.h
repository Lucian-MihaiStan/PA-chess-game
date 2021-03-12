#ifndef PA_CHESS_GAME_BOARD
#define PA_CHESS_GAME_BOARD

#include "pieces_classes/Piece.h"
#include <vector>
#include <map>

using namespace std;

#define COL_LINE 8

class Board {
private:
    vector<vector<Piece*>> board;

public:
    void initBoard();

    const map<string, Piece> &getBoardMap() const;

    void setBoardMap(const map<string, Piece> &boardMap);

    const vector<vector<Piece *>> &getBoard() const;

    void setBoard(const vector<vector<Piece *>> &board);
};


#endif
