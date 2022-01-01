#include<stdio.h>
int prime(int a);
void main()
{
	int n,x;
  	printf("enetr velue = ");
  	scanf("%d",&n);

  	x=prime(n);
	  if(x==1)
	  {
		  printf("the velue is prime");
	  }

	   else
	  {
		  printf("the velue is not prime");
	  }

  	printf(" %d ",x);
}

int prime(int z)
{
	int i,p=1;
	for(i=2;i<=(z/2);i++)
	{
		if(z%i==0)
		{
			p=p-1;
			break;
		}
	}
	return p;
}