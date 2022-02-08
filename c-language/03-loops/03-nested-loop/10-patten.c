// output:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include<stdio.h>
void main()
{
    int n,i,j,k=1,p=1,c=1;

    printf("enter n = ");
    scanf("%d",&n);

    for( i=1;k<=n;)
    {
       for (j=c,p=1; p<=k; )
       {
           if(j==1)
           {
             printf("%d ",j);
             j--;
           }
           else if(j==0)
           {
               printf("%d ",j);
             j++;
           }
          
            p++;
       }
       printf("\n");
       k++;
       if(k%2==0)
       {
           c=0;
       }
        else if(k%2!=0)
       {
           c=1;
       }
    }
}