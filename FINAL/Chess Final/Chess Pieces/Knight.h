#ifndef KNIGHT_H
#define KNIGHT_H
#include "ChessGame.h"

class Knight : public ChessPiece
{
public:
    Knight(ChessBoard* board, Color color);
    virtual ~Knight();
    string toString() const;
    vector<string>* legalMoves()const;
};

#endif // KNIGHT_H