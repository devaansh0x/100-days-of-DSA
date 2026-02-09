// Leetcode Problem of the day
// Reverses the character array in-place using two pointers with O(1) extra space
#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize)
{
    int i = 0, j = sSize - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char s[100005];
    scanf("%s", s);

    int n = strlen(s);
    reverseString(s, n);

    printf("%s\n", s);
    return 0;
}
