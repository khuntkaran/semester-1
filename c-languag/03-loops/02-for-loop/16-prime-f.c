#include <stdio.h>
void main()
{
    int x, i, k;

    printf("enter x = ");
    scanf("%d", &x);

    for (i=2,k=0;i <= (x - 1);i++)
    {
        if (x % i == 0)
        {
            k = k + 1;
            goto flag;
        }

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