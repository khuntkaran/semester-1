#include <stdio.h>
void main()
{
    int x, i = 2, k = 0;

    printf("enter x = ");
    scanf("%d", &x);

    while (i <= (x - 1))
    {
        if (x % i == 0)
        {
            k = k + 1;
            goto flag;
        }
        i++;
    }
    flag:
    if (k == 0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}