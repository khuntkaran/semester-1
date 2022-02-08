#include <stdio.h>
void main()
{
	int x,i=1;

	printf("enter x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		if (x%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}



}