#include <stdio.h>
#include<math.h>
void  main()
{
	float i, n ,sum=0.0,k=1.0,x=1.0;
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

		if (j%2==0)
		{
			sum=sum+(pow(x,i)/k);
			printf("%f\n",sum);
		}
		else{
			sum=sum-(pow(x,i)/k);
			printf("%f\n",sum);
		}
		
	}
	printf("sum = %f",1+sum);
}
