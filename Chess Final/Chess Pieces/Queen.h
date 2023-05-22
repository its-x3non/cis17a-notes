#ifndef QUEEN_H
#define QUEEN_H
#include "ChessGame.h"

class Queen : public ChessPiece
{
public:
    Queen(ChessBoard* board, Color color);
    virtual ~Queen();
    string toString() const;
    vector<string>* legalMoves()const;
};

#endif // QUEEN_H