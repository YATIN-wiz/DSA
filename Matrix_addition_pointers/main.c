#include <stdio.h>
#include <stdlib.h>
#define ROWS 25
#define COLUMNS 25
int main()
{
    int *matrix1[ROWS][COLUMNS];
    int *matrix2[ROWS][COLUMNS];
    int *resultantmatrix[ROWS][COLUMNS];
    int m1r, m1c, m2r, m2c;

    printf("Enter the order of the first matrix:");
    scanf("%d%d", &m1r, &m1c);
    printf("Enter the order of the second matrix:");
    scanf("%d%d", &m2r, &m2c);
    printf("Enter the elements of the first matrix:");
    for(int i = 0; i<m1r; i++)
    {
        for (int j = 0; j<m1c; j++)
        {
            printf(":");
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:");
    for(int i = 0; i<m2r; i++)
    {
        for (int j = 0; j<m2c; j++)
        {
            printf(":");
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (m1r == m2r && m2c == m2c)
        for(int i = 0; i<m1r; i++)
        {
            for (int j = 0; j<m1c; j++)
            {
                *resultantmatrix[i][j] = (*matrix1+(i*m1r)+j) + (*matrix2+(i*m2r)+j);


            }
        }

        for(int i = 0; i<m1r; i++)
        {
            for (int j = 0; j<m1c; j++)
            {
              printf("%d  ", resultantmatrix[i][j]);


            }
            printf("\n");
        }



    return 0;
}

