#include <stdio.h>
void main()
{
    int x, j = 0, p, k;

    printf("enter x = ");
    scanf("%d", &x);
    k = x;
    while (x > 0)
    {
        p = x % 10;
        j = (j * 10) + p;
        x = x / 10;
    }
    if (k == j)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }


    // palindrome value = 1,11,101,151,
}