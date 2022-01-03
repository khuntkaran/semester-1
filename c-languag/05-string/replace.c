#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    char name[10];

    printf("enter your name = ");
    gets(name);
   
   
    printf("wich number of replace character = ");
    scanf("%d",&a);
    printf("what is new character = ");
    scanf("%s",&name[a-1]);
    
    printf("name is %s",name); 
}
