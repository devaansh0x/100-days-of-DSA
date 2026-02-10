// Leetcode Problem
//  Returns the intersection of two arrays including duplicate counts using frequency counting
#include <stdio.h>
#include <stdlib.h>

int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int freq[1001] = {0};

    for (int i = 0; i < nums1Size; i++)
    {
        freq[nums1[i]]++;
    }

    int maxSize = nums1Size < nums2Size ? nums1Size : nums2Size;
    int *result = (int *)malloc(sizeof(int) * maxSize);
    int k = 0;

    for (int i = 0; i < nums2Size; i++)
    {
        if (freq[nums2[i]] > 0)
        {
            result[k++] = nums2[i];
            freq[nums2[i]]--;
        }
    }

    *returnSize = k;
    return result;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int nums1[1000], nums2[1000];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &nums1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &nums2[i]);
    }

    int returnSize = 0;
    int *res = intersect(nums1, n1, nums2, n2, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", res[i]);
    }

    free(res);
    return 0;
}