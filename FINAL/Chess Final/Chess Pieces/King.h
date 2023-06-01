#ifndef KING_H
#define KING_H
#include "ChessGame.h"

class King : public ChessPiece
{
public:
    King(ChessBoard* board, Color color);
    virtual ~King();
    string toString() const;
    vector<string>* legalMoves()const;
};

#endif // KING_H