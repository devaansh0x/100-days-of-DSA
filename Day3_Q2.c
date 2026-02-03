#include <stdio.h>
#include <stdlib.h>

int findMissing(int arr[], int size)
{
    int n = size + 1;
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int i = 0; i < size; i++)
    {
        actualSum += arr[i];
    }

    return (int)(expectedSum - actualSum);
}

int main()
{
    int size;
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMissing(arr, size));

    free(arr);
    return 0;
}