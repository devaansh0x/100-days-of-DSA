// Checks whether a given matrix is symmetric by comparing it with its transpose
#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (m != n)
    {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int isSymmetric = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
    {
        printf("Symmetric Matrix\n");
    }
    else
    {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}
