#include <stdio.h>
int max(int a, int b);
void main()
{
    int n1, n2, x;
    printf("enetr no1 = ");
    scanf("%d", &n1);

    printf("enetr no2 = ");
    scanf("%d", &n2);

    x = prime(n1, n2);
    if (x > 0)
    {
        printf("the big number is no1 = %d ", n1);
    }

    else if (x < 0)
    {
        printf("the big number is no2 = %d ", n2);
    }

    else
    {
        printf("both are same value ");
    }
}

int prime(int z, int y)
{
    int p;
    p = z - y;
    return p;
}