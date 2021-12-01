#include<stdio.h>
void main()
{
    int no;

    printf("enter your no = ");
    scanf("%d",&no);

    if(no>0)
    {
        printf("given no is possitive");
    }
     if(no<0)
    {
        printf("given no is negative");
    }
     if(no=0)
    {
        printf("given no is 0");
    }
}