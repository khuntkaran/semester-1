#include <stdio.h>
void main()
{
	int x,i,s;

	printf("enter x = ");
	scanf("%d",&x);

	for(i=1,s=1;i<=x;i++)
	{
		s=s*i;
	
	}

	printf("factorial = %d",s);

}