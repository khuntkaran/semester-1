#include<stdio.h>
void  main()
{
	int n,i,a=0,b=0,c=0;

	printf("how many enter value = ");
	scanf("%d",&n);

	int array[n];

	for(i=0;i<n;i++)
	{
		printf("number %d is = ",i+1);
		scanf("%d",&array[i]);

		if(array[i]>0)
		{
			a++;
		}
		else if(array[i]<0)
		{
			b++;
		}

		else
		{
			c++;
		}

	}
	printf("positive number is %d \n",a);
	printf("negative number is %d \n",b);
	printf("zero is %d \n",c);
}