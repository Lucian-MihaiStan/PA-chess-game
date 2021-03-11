#include "Piece.h"

bool Piece::getIsWhite() {
	return isWhite;
}

int Piece::getPoints() {
	return points;
}

Position* Piece::getCurrentPos() {
	return currentPos;
}

Piece::Piece(bool isWhite, int points, Position *currentPos) : isWhite(isWhite), points(points),
                                                               currentPos(currentPos) {}

Piece::Piece() {}
