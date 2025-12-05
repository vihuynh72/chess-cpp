#include "../include/piece.h"
#include <cctype>

Piece::Piece(char type, char color) : type(type), color(color) {}

char Piece::getType() const {
    return type;
}

char Piece::getColor() const {
    return color;
}

char Piece::getSymbol() const {
    if (type == '.') {
        return '.';
    }

    char symbol = type;
    
    if (color == 'B') {
        symbol = std::tolower(symbol);
    }

    return symbol;
}
