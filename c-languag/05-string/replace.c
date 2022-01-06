#include <stdio.h>
#include <string.h>
void main()
{
    int a, i;
    char name[10], c;

    printf("enter your name = ");
    gets(name);

    printf("wich number of replace character = ");
    scanf("%d", &a);
    fflush(stdin);
    printf("what is new character = ");

    scanf("%c", &c);

    for (i = 0; i < a; i++)
    {
        if (i == a - 1)
        {
            name[a - 1] = c;
        }
    }

    printf("name is %s", name);
}
