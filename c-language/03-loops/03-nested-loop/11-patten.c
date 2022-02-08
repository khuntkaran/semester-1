// output:
//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include<stdio.h>
void main()
{
    int n,i,j,k;

    printf("enter n = ");
    scanf("%d",&n);

    for( i=1;i<=n;i++)
    {
        
       for(j=i;j<n;j++)
       {
            printf(" ");   
       }
       for(k=1;k<=i;k++)
       {
           printf("%d ",i);
       }
       printf("\n");
    
    }
}