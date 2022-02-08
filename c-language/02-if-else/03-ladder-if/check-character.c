#include<stdio.h>
void main()
{
    char ch;
    printf("enter character = ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
        printf("character is small");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("character is capital");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("character is digit");
    }
    else
    {
        printf("character is speall character");
    }
    
}
    