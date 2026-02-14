// Leetcode Problem
//  Checks if a matrix is Toeplitz by comparing each element with its top-left neighbor
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int **matrix = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isToeplitz = 1;

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[i - 1][j - 1])
            {
                isToeplitz = 0;
                break;
            }
        }
        if (!isToeplitz)
            break;
    }

    if (isToeplitz)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
