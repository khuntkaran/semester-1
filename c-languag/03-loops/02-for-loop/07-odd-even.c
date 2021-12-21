#include <stdio.h>
void main()
{
	int n,i,sum;

	printf("enter n = ");
	scanf("%d",&n);

	for(i=0,sum=0;i<=n;i++)
	{
		if (i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}

	}
	
	printf("add = %d",sum);
}