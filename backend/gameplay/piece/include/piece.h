#ifndef PIECE_H
#define PIECE_H

class Piece {
    public:
        // type: 'P', 'R', 'N', 'B', 'Q', 'K', or '.' for empty
        // color: 'W' for White, 'B' for Black, 'N' for None
        Piece(char type = '.', char color = 'N');
        
        char getType() const;
        char getColor() const;
        char getSymbol() const;

    private:
        char type;
        char color;
};

#endif // PIECE_H
