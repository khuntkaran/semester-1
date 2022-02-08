#include <stdio.h>
void  main()
{
	float i, n ,sum=0.0,k;
	int j;
	printf("enter your velue\n");
	scanf("%f",&n);
	

	for(i=1.0;i<=n;i++)
	{
		for( j=1,k=1;j<=i;j++)
		{ 
			k=k*j;
		}

	
			sum=sum+(1/k);
			
		
	}
	printf("sum = %.2f",1+sum);
}
