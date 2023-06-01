#include <iostream>
#include "ChessGame.h"
using namespace std;

int main()
{
	ChessBoard board;

	board.initialize();
	board.print();
	system("pause");
	return 0;
}