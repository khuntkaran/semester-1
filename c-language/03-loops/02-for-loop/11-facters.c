#include <stdio.h>
void main()
{
	int x,i;

	printf("enter x = ");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		if (x%i==0)
		{
			printf("%d\n",i);
		}
		
	}



}