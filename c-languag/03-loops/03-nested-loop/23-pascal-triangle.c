// output:
//    1          
//   1 1         
//  1 2 1        
// 1 3 3 1       
//1 4 6 4 1       
#include<stdio.h>
void  main()
{
	int n,i,j,k,x;

	printf("enter n = ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
        x=1;
        for(j=n-i;j>=0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
          printf("%d ",x);
          x = x * (i-k)/k;
        }
		
        printf("\n");
	}
}

