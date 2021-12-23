// output:
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
#include<stdio.h>
void main()
{
    int n,i,j;

    printf("enter n = ");
    scanf("%d",&n);

    for( i=1;i<=n;n--)
    {
       for ( j = 1; j<=n ; j++)
       {
           printf("* ");
       }
       printf("\n");
    }
}