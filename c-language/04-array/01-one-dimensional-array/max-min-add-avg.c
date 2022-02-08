#include<stdio.h>
void  main()
{
	int n,i,a,b,j,sum=0;
	float avg;

	printf("how many enter value = ");
	scanf("%d",&n);

	int array[n];

	for(i=0;i<n;i++)
	{
		printf("number %d is = ",i+1);
		scanf("%d",&array[i]);

		sum=sum+array[i];

	}

	a=array[0];
	b=array[0];
	for(j=1;j<n;j++)
	{
		

		if(array[j]>a)
		{
			a=array[j];
		}
		if(array[j]<b)
		{
			b=array[j];
		}
	}
	avg=sum/n;

	printf("max is = %d\n",a);
	printf("min is = %d\n",b);
	printf("sum is = %d\n",sum);
	printf("avg is = %f\n",avg);
	
}