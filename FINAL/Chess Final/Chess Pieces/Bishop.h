#ifndef BISHOP_H
#define BISHOP_H
#include "ChessGame.h"

class Bishop : public ChessPiece
{
public:
    Bishop(ChessBoard* board, Color color);
    virtual ~Bishop();
    string toString() const;
    vector<string>* legalMoves()const;
};

#endif // BISHOP_H