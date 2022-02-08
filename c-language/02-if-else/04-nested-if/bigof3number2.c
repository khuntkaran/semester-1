#include <stdio.h>

void main()
{
    int a;
    int b;
    int c;

    printf("a number is\n");
    scanf("%d", &a);

    printf("b number is \n");
    scanf("%d", &b);

    printf("c number is \n");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d a number is big\n", a);
        }
        else
        {
            printf("%d c number is big\n", c);
        }
    }
    else
    {
        if (b > c)
        {

            printf("%d b number is big\n", b);
        }
        else
        {
            printf("%d c number is big\n", c);
        }
    }
}