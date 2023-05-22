#ifndef ROOK_H
#define ROOK_H
#include "ChessGame.h"

class Rook : public ChessPiece
{
public:
    Rook(ChessBoard* board, Color color);
    ~Rook();

    string toString() const;
    vector<string>* legalMoves()const;
};

#endif // ROOK_H