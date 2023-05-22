#include "Bishop.h"

Bishop::Bishop(ChessBoard* board, Color color) : ChessPiece(board, color)
{
}

Bishop::~Bishop()
{
}
string Bishop::toString() const
{
    if (color == BLACK)
        return "\u265D";
    else
        return "\u2657";
}

vector<string>* Bishop::legalMoves() const
{
    vector<string>* res = new vector<string>();
    int c_row, c_col;
    for (c_row = row - 1, c_col = column - 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row--, c_col--) //push_back
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));

    for (c_row = row + 1, c_col = column + 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row++, c_col++) //push_back
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));

    for (c_row = row + 1, c_col = column - 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row++, c_col--) //push_back
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));

    for (c_row = row - 1, c_col = column + 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row--, c_col++) //push_back
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));

    return res;
}