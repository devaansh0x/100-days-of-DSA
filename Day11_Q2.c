// Leetcode Problem
//  Computes the transpose of a matrix by swapping rows and columns and prints the result
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    if (scanf("%d %d", &m, &n) != 2)
        return 0;

    int **matrix = (int **)malloc(m * sizeof(int *));
    if (matrix == NULL)
        return 0;

    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
        if (matrix[i] == NULL)
            return 0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
