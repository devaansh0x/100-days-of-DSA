#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);

    int a[100000];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d", &q);

    int b[100000];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;

    // Merge both logs in chronological order
    while (i < p && j < q)
    {
        if (a[i] <= b[j])
        {
            printf("%d ", a[i]);
            i++;
        }
        else
        {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Print remaining entries from server 1 (if any)
    while (i < p)
    {
        printf("%d ", a[i]);
        i++;
    }

    // Print remaining entries from server 2 (if any)
    while (j < q)
    {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}
