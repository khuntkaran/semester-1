#include <stdio.h>
void main()
{
	int x,y,i,sum;

	printf("enter x = ");
	scanf("%d",&x);

	printf("enter y = ");
	scanf("%d",&y);

	for(i=1,sum=1;i<=y;i++)
	{
		sum=sum*x;
	}
	
	printf("add = %d",sum);
}