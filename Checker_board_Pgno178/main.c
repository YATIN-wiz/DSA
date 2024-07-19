#include <stdio.h>
#include <stdlib.h>



int main()
{
    char checker_board[8][8];
    char even[8] = {'B', 'R', 'B', 'R', 'B', 'R', 'B', 'R'};
    char odd[8] = {'R', 'B', 'R', 'B', 'R', 'B', 'R', 'B'};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i % 2 == 0)
            {
                checker_board[i][j] = even[j];
            }
            else
            {
                checker_board[i][j] = odd[j];
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
