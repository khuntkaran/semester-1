#include <stdio.h>

float sum();
void main()
{
	int x;
	x = sum();

	printf("sum = %d",x);
	
}
float sum()
{
	float n,i,p;

	printf("enter n = ");
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
		p=p+i;
	}

	return p;
}