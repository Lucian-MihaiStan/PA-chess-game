#include "Position.h"
#include "Piece.h"

#include <map>
#include <vector>

#ifndef PA_CHESS_GAME_BOARD
#define PA_CHESS_GAME_BOARD

#define COL_LINE 8

class Board{
public:
    void initBoard();
    std::vector<std::vector<Piece>> getBoard();
    std::map<Piece, Position> getWhiteMap();
    std::map<Piece, Position> getBlackMap();

private:
	std::vector<std::vector<Piece>> board;
    std::map<Piece, Position> whiteMap;
    std::map<Piece, Position> blackMap;
};


#endif
