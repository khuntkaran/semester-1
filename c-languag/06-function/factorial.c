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
	int s=1;
      if(a==1)
      {
      	s=s* 1;
      }
      else
      {
      	s=a*factorial(a-1);
      }
    

    return s;
}