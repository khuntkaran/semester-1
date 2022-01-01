#include <stdio.h>

int factorial(int a);

void main()
{
	int x;

	printf("enter x = ");
	scanf("%d",&x);

    x=factorial(x);

	printf("factorial = %d",x);
}
int factorial(int a)
{
    int i,s;

    for(i=1,s=1;i<=a;i++)
	{
		s=s*i;
	}

    return s;
}