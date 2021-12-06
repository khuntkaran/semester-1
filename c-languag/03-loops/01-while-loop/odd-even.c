#include <stdio.h>
void main()
{
	int n,i=0,sum=0;

	printf("enter n = ");
	scanf("%d",&n);

	while(i<=n)
	{
		if (i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	
	printf("add = %d",sum);
}