#include <stdio.h>
#include<math.h>
void  main()
{
	float i, n ,sum=0.0,k,x;
	int j;
	printf("enter your velue\n");
	scanf("%f",&n);
	printf("enter your x\n");
	scanf("%f",&x);

	for(i=1.0;i<=n;i++)
	{
		for( j=1,k=1;j<=i;j++)
		{ 
			k=k*j;
		}

			sum=sum+(pow(x,i)/k);
		
		
	}
	printf("sum = %f",1+sum);
}
