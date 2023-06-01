#include "Rook.h"

// Constructor
Rook::Rook(ChessBoard* board, Color color) : ChessPiece(board, color){}

// Destructor
Rook::~Rook(){}

// Returns a string representation of the Rook object.
string Rook::toString() const
{
    if (color == BLACK)
        return "\u265C";
    else
        return "\u2656";
}

// Returns a vector of strings representing the legal moves for the Rook object.
vector<string>* Rook::legalMoves() const
{
    // Create a new vector to store the legal moves
    vector<string>* res = new vector<string>();
    int c_row, c_col;

    // Check for legal moves in the upward direction
    for (c_row = row - 1; ChessBoard::isCorrect(c_row); c_row--)
        if (board->getPiece(Position(c_row, column)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, column));
        else
            break;
    // Check for legal moves to capture an opponent's piece
    if (ChessBoard::isCorrect(c_row))
        if (board->getPiece(Position(c_row, column)) != NULL)
            if (board->getPiece(Position(c_row, column))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, column));

    // Check for legal moves in the downward direction
    for (c_row = row + 1; ChessBoard::isCorrect(c_row); c_row++)
        if (board->getPiece(Position(c_row, column)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, column));
        else
            break;
    // Check for legal moves to capture an opponent's piece
    if (ChessBoard::isCorrect(c_row))
        if (board->getPiece(Position(c_row, column)) != NULL)
            if (board->getPiece(Position(c_row, column))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, column));

    // Check for legal moves to the left
    for (c_col = column - 1; ChessBoard::isCorrect(c_col); c_col--)
        if (board->getPiece(Position(row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(row, c_col));
        else
            break;
    // Check for legal moves to capture an opponent's piece
    if (ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(row, c_col)) != NULL)
            if (board->getPiece(Position(row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(row, c_col));

    // Check for legal moves to the right
    for (c_col = column + 1; ChessBoard::isCorrect(c_col); c_col++)
        if (board->getPiece(Position(row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(row, c_col));
        else
            break;
    // Check for legal moves to capture an opponent's piece
    if (ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(row, c_col)) != NULL)
            if (board->getPiece(Position(row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(row, c_col));

    // Return the vector of legal moves
    return res;
}
