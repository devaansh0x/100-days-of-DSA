// Leetcode Problem
//  Checks if a number is a power of two using a bitwise trick without loops or recursion
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (isPowerOfTwo(n))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
