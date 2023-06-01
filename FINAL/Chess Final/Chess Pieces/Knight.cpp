#include "Knight.h"

Knight::Knight(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    //ctor
}

Knight::~Knight()
{
    //dtor
}

string Knight::toString() const {
    if (color == BLACK)
        return "\u265E";
    else
        return "\u2658";
}

vector<string>* Knight::legalMoves()const {
    vector<string>* res = new vector<string>();
    return res;
}