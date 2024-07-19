#include "Matrix_operations.h"
#define ROWS 25
#define COLUMNS 25

void matrixaddition()
{
    int matrix1[ROWS][COLUMNS];
    int matrix2[ROWS][COLUMNS];
    int resultantmatrix[ROWS][COLUMNS];
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
                resultantmatrix[i][j] = matrix1[i][j] + matrix2[i][j];

            }
        }

    for(int i = 0; i<m1r; i++)
    {
        for (int j = 0; j<m1c; j++)
        {
            printf("%d ", resultantmatrix[i][j]);


        }
        printf("\n");
    }
    return 0;
}

void matrixmultpication()
{
    int matrix1[ROWS][COLUMNS];
    int matrix2[ROWS][COLUMNS];
    int resultantmatrix[ROWS][COLUMNS];
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

    if (m1c == m2r )
    {
        for(int i = 0; i<m1r; i++)
        {
            for (int j = 0; j<m2c; j++)
            {
                resultantmatrix[i][j] = 0;
                for(int k = 0; k < m2c ; k++)
                {
                    resultantmatrix[i][j] += (matrix1[i][k] * matrix2[k][j]);
                }
            }
        }
        for(int i = 0; i<m1r; i++)
        {
            for (int j = 0; j<m2c; j++)
            {
                printf("%d ", resultantmatrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
