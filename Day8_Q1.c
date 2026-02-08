// Computes a raised to the power b using recursion without using pow()
#include <stdio.h>

long long power(int a, int b)
{
    if (b == 0)
        return 1;
    return (long long)a * power(a, b - 1);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%lld\n", power(a, b));

    return 0;
}
