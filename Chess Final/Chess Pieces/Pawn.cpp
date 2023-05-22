#include "Pawn.h"

#include <iostream>

Pawn::Pawn(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    wasMoved = false;
}

Pawn::~Pawn()
{
}
string Pawn::toString() const
{
    if (color == BLACK)
        return "\u265F";
    else
        return "\u2659";
}

vector<string>* Pawn::legalMoves() const
{
    vector<string>* res = new vector<string>();
    int c_row = row, c_col = column;

    if (color == BLACK)
    {
        // Normal move
        if (board->getPiece(Position(c_row - 1, c_col)) == NULL)
        {
            res->push_back(ChessBoard::coordToString(c_row - 1, c_col)); // 1 move
            if (c_row == 6)
            { // Check for 2 moves
                if (board->getPiece(Position(c_row - 2, c_col)) == NULL)
                {
                    res->push_back(ChessBoard::coordToString(c_row - 2, c_col));
                } // else -> Only 1 move allowed
            }
        }
        // Check for kill
        c_row = row - 1;
        c_col = column + 1;
        if (ChessBoard::isCorrect(c_col) && board->getPiece(Position(c_row, c_col)) != NULL) // South East
        {
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));
        }
        c_col = column - 1;
        if (ChessBoard::isCorrect(c_col) && board->getPiece(Position(c_row, c_col)) != NULL) // South West
        {
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));
        }
    }
    else if (color == WHITE) {
        // Normal move
        if (board->getPiece(Position(c_row + 1, c_col)) == NULL)
        {
            res->push_back(ChessBoard::coordToString(c_row + 1, c_col)); // 1 move
            if (c_row == 1)
            { // Check for 2 moves
                if (board->getPiece(Position(c_row + 2, c_col)) == NULL)
                {
                    res->push_back(ChessBoard::coordToString(c_row + 2, c_col));
                }
            }
        }
        c_row = row + 1;
        c_col = column + 1;
        if (ChessBoard::isCorrect(c_col) && board->getPiece(Position(c_row, c_col)) != NULL) // North East
        {
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));
        }
        c_col = column - 1;
        if (ChessBoard::isCorrect(c_col) && board->getPiece(Position(c_row, c_col)) != NULL) // North West
        {
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col));
        }
    }
    return res;
}