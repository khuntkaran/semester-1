#include<stdio.h>
void  main()
{
	int n,i,a=0,b=0;
	
	
	printf("how many enter value = ");
	scanf("%d",&n);
	int array[n];
	

	for(i=0;i<n;i++)
	{
		printf("number %d is = ",i+1);
		scanf("%d",&array[i]);

		if(array[i]%2==0)
		{
			a++;
		}
		else
		{
			b++;
		}

		

	}
	printf("even number is %d \n",a);
	printf("odd number is %d \n",b);
}