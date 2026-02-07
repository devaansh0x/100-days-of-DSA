// Leetcode Problem
//  Moves all zeros to the end in-place while maintaining the order of non-zero elements and minimizing unnecessary writes
#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int lastNonZero = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            if (i != lastNonZero)
            {
                int temp = nums[i];
                nums[i] = nums[lastNonZero];
                nums[lastNonZero] = temp;
            }
            lastNonZero++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int nums[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
