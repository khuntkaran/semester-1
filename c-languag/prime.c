#include<stdio.h>
int prime(int a);
void main()
{
	int n,x;
  	printf("enetr velue = ");
  	scanf("%d",&n);

  	x=prime(n);

  	printf("enter velue prime =1 otherwise =0 \nvalue = %d ",x);
}

int prime(int z)
{
	int i,p=0;
	for(i=2;i<=(z/2);i++)
	{
		if(z%i!=0)
		{
			p=p+1;
			break;
		}
	}
	return p;
}