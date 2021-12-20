#include <stdio.h>
void main()
{
	int x,i=1,s=1;

	printf("enter x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		s=s*i;
		i++;
	}

	printf("factorial = %d",s);

}