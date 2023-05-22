#include "Rook.h"

Rook::Rook(ChessBoard* board, Color color) : ChessPiece(board, color)
{
}

Rook::~Rook()
{
}

string Rook::toString() const
{
    if (color == BLACK)
        return "\u265C";
    else
        return "\u2656";
}

vector<string>* Rook::legalMoves() const
{
    vector<string>* res = new vector<string>();
    int c_row, c_col;

    for (c_row = row - 1; ChessBoard::isCorrect(c_row); c_row--) //push_back
        if (board->getPiece(Position(c_row, column)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, column));
        else
            break;
    //check for kill
    if (ChessBoard::isCorrect(c_row))
        if (board->getPiece(Position(c_row, column)) != NULL)
            if (board->getPiece(Position(c_row, column))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, column));

    //moving throw current row right
    for (c_row = row + 1; ChessBoard::isCorrect(c_row); c_row++) //push_back
        if (board->getPiece(Position(c_row, column)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, column));
        else
            break;
    // Chek for kill
    if (ChessBoard::isCorrect(c_row))
        if (board->getPiece(Position(c_row, column)) != NULL)
            if (board->getPiece(Position(c_row, column))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, column));

    for (c_col = column - 1; ChessBoard::isCorrect(c_col); c_col--) //push_back
        if (board->getPiece(Position(row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(row, c_col)) != NULL)
            if (board->getPiece(Position(row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(row, c_col));

    for (c_col = column + 1; ChessBoard::isCorrect(c_col); c_col++) //push_back
        if (board->getPiece(Position(row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(row, c_col));
        else
            break;
    if (ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(row, c_col)) != NULL)
            if (board->getPiece(Position(row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(row, c_col));

    return res;
}