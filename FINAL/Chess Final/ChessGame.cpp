#include "ChessGame.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Knight.h"
#include <iostream>
using namespace std;

ChessBoard::ChessBoard()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            board[i][j] = NULL;
    }
}

ChessBoard::~ChessBoard()
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] != NULL)
                delete board[i][j];
}

void ChessBoard::initialize()
{
    //WHITE

    for (int i = 0; i < 8; i += 7)
    {
        Color col = WHITE;
        if (i > 0)
            col = BLACK;

        //set elements: rook:
        board[i][0] = new Rook(this, col);
        board[i][0]->setColumn(0);
        board[i][0]->setRow(i);

        board[i][7] = new Rook(this, col);
        board[i][7]->setColumn(7);
        board[i][7]->setRow(i);

        board[i][1] = new Knight(this, col);
        board[i][1]->setColumn(1);
        board[i][1]->setRow(i);

        board[i][6] = new Knight(this, col);
        board[i][6]->setColumn(6);
        board[i][6]->setRow(i);

        board[i][2] = new Bishop(this, col);
        board[i][2]->setColumn(2);
        board[i][2]->setRow(i);

        board[i][5] = new Bishop(this, col);
        board[i][5]->setColumn(5);
        board[i][5]->setRow(i);

        board[i][3] = new Queen(this, col);
        board[i][3]->setColumn(3);
        board[i][3]->setRow(i);

        board[i][4] = new King(this, col);
        board[i][4]->setColumn(4);
        board[i][4]->setRow(i);
        //BLACK
    }

    for (int i = 1; i < 8; i += 5)
    {
        Color col = WHITE;
        if (i > 1)
            col = BLACK;

        for (int j = 0; j < 8; j++)
        {
            board[i][j] = new Pawn(this, col);
            board[i][j]->setColumn(j);
            board[i][j]->setRow(i);
        }
    }
}

bool ChessBoard::placePiece(ChessPiece* piece, Position position)
{
    if (piece != NULL)
    {
        return move(ChessBoard::coordToString(piece->getRow(), piece->getColumn()),
            ChessBoard::coordToString(position.row, position.col));
    }
    else
        return false;
}

ChessPiece* ChessBoard::getPiece(Position position) const
{
    if (isCorrect(position.col) && isCorrect(position.row))
        return board[position.row][position.col];
    return NULL;
}

bool ChessBoard::isCorrect(const int num)
{
    if ((num >= 0) && (num < SIZE))
        return true;
    else
        return false;
}

string ChessBoard::coordToString(const int row, const int col)
{
    string s;
    s = (col + 'a');
    s += (8 - row) + '0';
    return s;
}

Position ChessBoard::coordToPosition(const string str)
{
    char symb = tolower(str[0]);
    Position p(8 - (str[1] - '0'), symb - 'a');
    return p;
}

void ChessBoard::print() const
{
    string s = "";
    int row, col;
    for (row = 0; row < SIZE; row++)
    {
        s += "   ";
        for (col = 0; col < SIZE; col++)
            s += "+---";
        s += "+\n";
        s += " ";
        s += (8 - row) + '0';
        s += " ";
        for (col = 0; col < SIZE; col++)
        {
            s += "| ";
            if (board[row][col] != NULL)
            {
                string code = board[row][col]->toString();
                s += code;
            }
            else
                s += " ";
            s += " ";
        }
        s += "|\n";
    }
    s += "   ";
    for (col = 0; col < SIZE; col++)
        s += "+---";
    s += "+\n";
    s += "     ";
    for (col = 0; col < SIZE; col++)
    {
        s += char(65 + col);
        s += "   ";
    }
    s += "\n";
    cout << s;
}



bool ChessBoard::move(string fromStr, string toStr)
{
    Position fromPosition = ChessBoard::coordToPosition(fromStr);
    Position toPosition = ChessBoard::coordToPosition(toStr);
    if (ChessBoard::isCorrect(fromPosition.row) && ChessBoard::isCorrect(fromPosition.col)) {
        if (ChessBoard::isCorrect(toPosition.row) && ChessBoard::isCorrect(toPosition.col)) {
            if (board[fromPosition.row][fromPosition.col] != NULL) {
                vector<string>* res = board[fromPosition.row][fromPosition.col]->legalMoves();
                cout << "Legal moves: ";
                for (auto s = res->begin(); s != res->end(); s++) {
                    cout << *s << " ";
                }
                cout << endl;

                bool canDo = false;
                if (res->size() > 0)
                {
                    //check position to:
                    int i;
                    string s = ChessBoard::coordToString(toPosition.row, toPosition.col);
                    for (i = 0; i < res->size(); i++)
                        if (res->at(i) == s) {
                            canDo = true;
                            break;
                        }
                }
                if (!canDo)
                    return false;

                // Making a move
                board[toPosition.row][toPosition.col] = board[fromPosition.row][fromPosition.col];
                board[fromPosition.row][fromPosition.col] = NULL; //remove the pvs pos
                board[toPosition.row][toPosition.col]->setColumn(toPosition.col);
                board[toPosition.row][toPosition.col]->setRow(toPosition.row);
                return true;
            }
        }
    }
    return false;
}