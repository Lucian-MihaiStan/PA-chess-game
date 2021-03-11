#include "Board.h"

void Board::initBoard() {
}

const vector<vector<Piece *>> &Board::getBoard() const {
    return board;
}

void Board::setBoard(const vector<vector<Piece *>> &board) {
    Board::board = board;
}



