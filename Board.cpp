#include "Board.h"


void Board::initBoard() {

}

std::vector<std::vector<Piece>> Board::getBoard() {
	return board; 
}

std::map<Piece, Position> Board::getWhiteMap() {
	return whiteMap;
}

std::map<Piece, Position> Board::getBlackMap() {
	return blackMap;
}
