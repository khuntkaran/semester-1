// output:
//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include<stdio.h>
void main()
{
    int n,i,j,k=1,p,l;

    printf("enter n = ");
    scanf("%d",&n);

    for( i=1;k<=n;i++)
    {
        
       for(j=i,p=i;p<n;p++)
       {
            printf(" ");   
       }
       for(l=1;l<=i;l++)
       {
           printf("%d ",i);
       }
       printf("\n");
       k++;
    }
}