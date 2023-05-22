#ifndef CHESSGAME_H
#define CHESSGAME_H
#define SIZE 8

#include<vector>
#include<string>
using namespace std;

// Forward declaration of ChessPiece class
class ChessPiece;

// CHESSBOARD CLASS
struct Position
{
    int row;
    int col;
    Position(int _row, int _col)
    {
        row = _row;
        col = _col;
    }
};

class ChessBoard
{
private:
    ChessPiece* board[SIZE][SIZE];

public:
    ChessBoard();
    virtual ~ChessBoard();
    ChessPiece* getPiece(Position position) const; // returns the chess piece at a given position.
    bool static isCorrect(const int);
    static string coordToString(const int, const int);
    static Position coordToPosition(const string);
    void initialize();
    void print() const;
    bool move(string fromStr, string toStr);
    bool placePiece(ChessPiece* piece, Position position);
};

// CHESSPIECE CLASS
enum Color { WHITE, BLACK };

class ChessPiece
{
protected:
    ChessBoard* board; // the board it belongs to, default null
    int row; // the index of the horizontal rows 0..7
    int column; // the index of the vertical column 0..7
    Color color; // the color of the piece
public:
    ChessPiece(ChessBoard* board, Color color);
    ~ChessPiece() {}

    // getters
    int getRow() const { return row; } // the row.
    int getColumn() const { return column; } // returns the column.
    Color getColor() const { return color; } // returns the color of the piece
    string getPosition() const; // returns the position of the piece in the format single letter (a..h) followed by a single digit (1..8).

    //setters
    void setRow(const int);
    void setColumn(const int); //sets the column.
    void setPosition(const Position); //
    void setPosition(const string); //

    virtual string toString() const = 0;//
    virtual vector<string>* legalMoves() const = 0;

};

#endif