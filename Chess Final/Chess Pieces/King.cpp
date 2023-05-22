#include "King.h"

King::King(ChessBoard* board, Color color) : ChessPiece(board, color)
{
}

King::~King()
{
}

string King::toString() const {
    if (color == BLACK)
        return "\u265A";
    else
        return "\u2654";
}

vector<string>* King::legalMoves()const {
    vector<string>* res = new vector<string>();
    return res;
}