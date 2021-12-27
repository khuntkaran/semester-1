#include<stdio.h>
void  main()
{
	int n,i,a,j,sum=0;
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

	
	avg=sum/n;

	for(j=0;j<n;j++)
	{

		if(array[j]>avg)
		{
			a++;
		}
		
	}
	printf("avg = %f\n",avg);
	printf("higher than avg = %d\n",a);

}