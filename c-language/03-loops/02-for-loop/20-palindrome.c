#include <stdio.h>
void main()
{
    int x, j, p, k;

    printf("enter x = ");
    scanf("%d", &x);

    for (k=x;x > 0;x = x / 10)
    {
        p = x % 10;
        j = (j * 10) + p;
        
    }
    if (k == j)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
}