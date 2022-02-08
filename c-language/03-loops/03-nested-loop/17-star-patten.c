// output:
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
#include<stdio.h>
void main()
{
    int n,i,j,k,p;

    printf("enter n = ");
    scanf("%d",&n);
    p=n;
    for( i=1;i<=n;i++)
    {

       for ( j = 1; j<=(p-1)*2 ; j++)
       {
           printf(" ");
       }
       p--;
       for(k=1; k<=i;k++)
       {
           printf("* ");
       }
       printf("\n");
    }
}