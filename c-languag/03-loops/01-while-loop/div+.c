#include <stdio.h>
void main()
{
	float n,i=1.0,sum=0.0;

	printf("enter n = ");
	scanf("%f",&n);

	while(i<=n)
	{
		// k=(1.0)/(i);
		sum=sum+(1.0/i);
		i++;	
	}
	
	printf("add = %f",sum);
}