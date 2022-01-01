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
	int i,j,x,p;

	for(i=0,j=1,p=1;p<=n-2;p++)

	{
		if(p==1)
		{
			printf("%d %d ",i,j);
		}

		x=i+j;
		i=j;
		j=x;
		printf("%d ",x);
	}
}