#include<stdio.h>
int fibbo(int);
void  main()
{
	int n,i,x;

	printf("enter n = ");
	scanf("%d",&n);

	for(i=1,x=0;i<=n;i++,x++)
	{
		printf("%d ",fibbo(x));
	}
}

int fibbo(int p)
{
		if(p==0 || p==1)
		{
			return p;
		}
		else
		{
			return (fibbo(p-1)+fibbo(p-2));
		}
	
}
// void  main()
// {
// 	int y,x,n;

// 	printf("enter n = ");
// 	scanf("%d",&n);

// 	fibbo(n);
// }

// int fibbo(int n)
// {
// 	int i,j,x,p;

// 	for(i=0,j=1,p=1;p<=n-2;p++)

// 	{
// 		if(p==1)
// 		{
// 			printf("%d %d ",i,j);
// 		}

// 		x=i+j;
// 		i=j;
// 		j=x;
// 		printf("%d ",x);
// 	}
// }