// output:
// AAAAA
// BBBB
// CCC
// DD
// E
#include<stdio.h>
void main()
{
    int n,i,j;
    char c='A';
    printf("enter n = ");
    scanf("%d",&n);

    for( i=n;i>0;i--)
    {
       for ( j = 1; j<=i ; j++)
       {
           printf("%c",c);
       }
       c++;
       printf("\n");
    }
}