#include <stdio.h>

int removeElement(int *nums, int numsSize, int val)
{
    int i = 0;
    int n = numsSize;

    while (i < n)
    {
        if (nums[i] == val)
        {
            nums[i] = nums[n - 1];
            n--;
        }
        else
        {
            i++;
        }
    }

    return n;
}

int main()
{
    int n;
    scanf("%d", &n);

    int nums[100]; // constraints say max 100
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int val;
    scanf("%d", &val);

    int k = removeElement(nums, n, val);

    // Print first k elements
    for (int i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n%d\n", k); // optional: print k on next line

    return 0;
}
