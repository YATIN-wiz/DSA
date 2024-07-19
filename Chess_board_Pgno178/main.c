#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chess_board[8][8] =
    	{"p", "p", "p", "p", "p", "p", "p", "p"},
        {"r", "n", "b", "q", "k", "b", "n", "r"},
        {" ", ".", " ", ".", " ", ".", " ", "."},
        {".", " ", ".", " ", ".", " ", ".", " "},
        {" ", ".", " ", ".", " ", ".", " ", "."},
        {".", " ", ".", " ", ".", " ", ".", " "},
        {"R", "N", "B", "Q", "K", "B", "N", "R"},
        {"P", "P", "P", "P", "P", "P", "P", "P"};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", chess_board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
