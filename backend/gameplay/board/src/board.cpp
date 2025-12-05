#include "../include/board.h"

Board::Board() {
    grid.resize(8, std::vector<Piece>(8));
    setupBoard();
}

void Board::setupBoard() {
    // Setup Black Pieces (Top of board, Row 0 and 1)
    grid[0][0] = Piece('R', 'B');
    grid[0][1] = Piece('N', 'B');
    grid[0][2] = Piece('B', 'B');
    grid[0][3] = Piece('Q', 'B');
    grid[0][4] = Piece('K', 'B');
    grid[0][5] = Piece('B', 'B');
    grid[0][6] = Piece('N', 'B');
    grid[0][7] = Piece('R', 'B');

    for (int i = 0; i < 8; ++i) {
        grid[1][i] = Piece('P', 'B');
    }

    // Setup Empty Squares
    for (int i = 2; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {
            grid[i][j] = Piece('.', 'N');
        }
    }

    // Setup White Pieces (Bottom of board, Row 6 and 7)
    for (int i = 0; i < 8; ++i) {
        grid[6][i] = Piece('P', 'W');
    }

    grid[7][0] = Piece('R', 'W');
    grid[7][1] = Piece('N', 'W');
    grid[7][2] = Piece('B', 'W');
    grid[7][3] = Piece('Q', 'W');
    grid[7][4] = Piece('K', 'W');
    grid[7][5] = Piece('B', 'W');
    grid[7][6] = Piece('N', 'W');
    grid[7][7] = Piece('R', 'W');
}

void Board::display() const {
    std::cout << "     A   B   C   D   E   F   G   H" << std::endl;
    std::cout << "    -------------------------------" << std::endl;
    for (int i = 0; i < 8; ++i) {
        std::cout << 8 - i << " | ";
        for (int j = 0; j < 8; ++j) {
            std::cout << "[" << grid[i][j].getSymbol() << "]";
            if (j < 7) std::cout << " ";
        }
        std::cout << " | " << 8 - i;

        // Legend
        if (i == 0) std::cout << "     Legend:";
        else if (i == 1) std::cout << "     P : Pawn";
        else if (i == 2) std::cout << "     R : Rook";
        else if (i == 3) std::cout << "     N : Knight";
        else if (i == 4) std::cout << "     B : Bishop";
        else if (i == 5) std::cout << "     Q : Queen";
        else if (i == 6) std::cout << "     K : King";
        else if (i == 7) std::cout << "     (Upper=White, Lower=Black)";

        std::cout << std::endl;
        if (i < 7) std::cout << std::endl;
    }
    std::cout << "    -------------------------------" << std::endl;
    std::cout << "     A   B   C   D   E   F   G   H" << std::endl;
}
