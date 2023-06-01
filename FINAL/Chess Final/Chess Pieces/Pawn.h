#ifndef PAWN_H
#define PAWN_H
#include "ChessGame.h"

class Pawn : public ChessPiece
{
public:
    Pawn(ChessBoard* board, Color color);
    virtual ~Pawn();

    string toString() const;
    vector<string>* legalMoves()const;
protected:
    bool wasMoved;
};

#endif // PAWN_H