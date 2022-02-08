#include<stdio.h>
#include<string.h>
void main()
{
    int a,b,i;
    char name[10];

    printf("enter your name = ");
    gets(name);
    b = strlen(name);
    printf("wich number of delete character = ");
    scanf("%d",&a);
   
    name[a-1]=0;

   for(i=0;i<b;i++)
    {
       printf("%c",name[i]); 
    }
}