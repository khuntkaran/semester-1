#include<stdio.h>
void main()
{
    int x,i;

    printf("enter array = ");
    scanf("%d",&x);

    int num[x];

    for(i=0;i<x;i++)
    {
        printf("enter value %d = ",i+1);
        scanf("%d",&num[i]);
    }

    for(i=i-1;i>=0;i--)
    {
        printf(" %d",num[i]);
    }
}