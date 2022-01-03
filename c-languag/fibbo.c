#include<stdio.h>
int fibbo(int n);
void  main()
{
	int y,x,n;

	printf("enter n = ");
	scanf("%d",&n);

	fibbo(n);
}

int fibbo(int n)
{
	int i=0,p=1;

	if(n<=1)
	{
     return n;  
	}	
	else
	{
	return fibbo(n-1)+fibbo(n-2);
	}
}