// LeetCode question
//  Merge two sorted arrays into nums1 in-place
#include <stdio.h>

void merge(int *nums1, int m, int *nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int nums1[205];
    int nums2[205];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", nums1[i]);
    }

    return 0;
}
