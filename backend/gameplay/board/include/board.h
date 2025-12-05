#ifndef BOARD_H
#define BOARD_H

#include "../../piece/include/piece.h"
#include <vector>
#include <iostream>

class Board {
    public:
        Board();
        void display() const;

    private:
        std::vector<std::vector<Piece>> grid;
        void setupBoard();
};

#endif // BOARD_H
