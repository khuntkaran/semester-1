#include <stdio.h>
#include<math.h>
float equation(int a,int b);
void  main()
{
	float n,x,y;
	
	printf("enter your velue\n");
	scanf("%f",&y);
	printf("enter your x\n");
	scanf("%f",&x);

	n=equation(y,x);

	printf("sum = %f",n);
}
float equation(int a,int b)
{

	float i, sum=0.0,k,p=1;
	int j;
	for(i=1.0;i<=a+a;i=i+2)
	{
		for( j=1,k=1;j<=i;j++)
		{ 
			k=k*j;
		}

		if (p==1)
		{
			sum=sum+(pow(b,i)/k);
			p--;
			printf("sumo = %f\n",sum);
		}
		else{
			sum=sum-(pow(b,i)/k);
			p++;
			printf("sumo = %f\n",sum);
		}
		
	}
	return sum;
}