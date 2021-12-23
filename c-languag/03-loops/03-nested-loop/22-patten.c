// output:
// ABCDE
// ABCD
// ABC
// AB
// A
#include<stdio.h>
void main()
{
    int n,i,j;
    char c;
    printf("enter n = ");
    scanf("%d",&n);

    for( i=n;i>0;i--)
    {
        c='A';
       for ( j = 1; j<=i ; j++)
       {
           printf("%c",c);
           c++;
       }
       
       printf("\n");
    }
}