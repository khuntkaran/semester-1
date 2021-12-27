#include<stdio.h>
void  main()
{
	int n,i,a=0,b=0;
	
	
	printf("how many enter value = ");
	scanf("%d",&n);
	int array[n];
	

	for(i=0;i<n;i++)
	{
		printf("height %d is = ",i+1);
		scanf("%d",&array[i]);

		if(array[i]>170)
		{
			a++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("weight %d is = ",i+1);
		scanf("%d",&array[i]);

		if(array[i]<50)
		{
			b++;
		}

	}
	printf("height greaterthan 170 = %d \n",a);
	printf("weight less than = %d \n",b);
}