// output:
// * * * * * * *   
//   * * * * *
//     * * *
//       *
#include<stdio.h>
void main()
{
    int n,i,j,k,p;

    printf("enter n = ");
    scanf("%d",&n);
        p=n;
    for( i=0;i<n;i++)
    {
        
       for(j=1;j<=2*i;j++)
       {
            printf(" ");   
       }
       for(k=1;k<=(2*p)-1;k++)
       {
           printf("* ");
       }
       p--;
       printf("\n");
    
    }
}