#include "Position.h"


int Position::getLine() {
    return line;
}

char Position::getColumn() {
    return column;
}

void Position::setLine(int l) {
    line = l;
}

void Position::setColumn(char c) {
    column = c;
}

std::string Position::toString() {
    return NULL;
}
