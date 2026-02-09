// Reverses a given string in-place using two pointers and prints the mirrored result
#include <stdio.h>
#include <string.h>

int main()
{
    char s[10005];
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", s);

    return 0;
}
