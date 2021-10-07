#include <iostream>
#include <cstdlib>

using namespace std;

const int X = 1, O = -1, EMPTY = 0;
int board[3][3];
int currentPlayer;

void clearBoard() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) 
            board[i][j] = EMPTY;
    currentPlayer = X;
}


void putMark(int i, int j) {
    board[i][j] = currentPlayer;
    currentPlayer = -currentPlayer;
}

bool isWin(int mark) {
    int win = 3 * mark;
    return ( (board[0][0] + board[0][1] + board[0][2] == win)
            || (board[1][0] + board[1][1] + board[1][2] == win)
            || (board[2][0] + board[2][1] + board[2][2] == win)
            || (board[0][0] + board[0][1] + board[0][2] == win)
            || (board[0][0] + board[0][1] + board[0][2] == win)
            || (board[0][0] + board[0][1] + board[0][2] == win)
            || (board[0][0] + board[0][1] + board[0][2] == win)
            || (board[0][0] + board[0][1] + board[0][2] == win) );
}
