#include <stdio.h>
void main()
{
	float n,i,sum;

	printf("enter n = ");
	scanf("%f",&n);

	for(i=1.0,sum=0.0;i<=n;i++)
	{
		// k=(1.0)/(i);
		sum=sum+(1.0/i);
		
	}
	
	printf("add = %f",sum);
}