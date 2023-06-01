#include "Bishop.h"

// Constructor
Bishop::Bishop(ChessBoard* board, Color color) : ChessPiece(board, color){}

// Destructor 
Bishop::~Bishop(){}

// Returns a string representation of the Bishop object.
string Bishop::toString() const
{
    if (color == BLACK)
        return "\u265D";
    else
        return "\u2657";
}

// Returns a vector of legal moves for the Bishop object.
vector<string>* Bishop::legalMoves() const
{
    vector<string>* res = new vector<string>(); // Create a new vector to store legal moves
    int c_row, c_col;

    // Check for legal moves in the diagonal direction from top left to bottom right
    for (c_row = row - 1, c_col = column - 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row--, c_col--)
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector if it captures an opponent's piece

    // Check for legal moves in the diagonal direction from bottom left to top right
    for (c_row = row + 1, c_col = column + 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row++, c_col++)
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector if it captures an opponent's piece

    // Check for legal moves in the diagonal direction from bottom right to top left
    for (c_row = row + 1, c_col = column - 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row++, c_col--)
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector if it captures an opponent's piece

    // Check for legal moves in the diagonal direction from top right to bottom left
    for (c_row = row - 1, c_col = column + 1; ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col); c_row--, c_col++)
        if (board->getPiece(Position(c_row, c_col)) == NULL)
            res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector
        else
            break;
    if (ChessBoard::isCorrect(c_row) && ChessBoard::isCorrect(c_col))
        if (board->getPiece(Position(c_row, c_col)) != NULL)
            if (board->getPiece(Position(c_row, c_col))->getColor() != color)
                res->push_back(ChessBoard::coordToString(c_row, c_col)); // Add the legal move to the vector if it captures an opponent's piece

    return res; // Return the vector of legal moves
}
