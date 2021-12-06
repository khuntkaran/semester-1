#include <stdio.h>
void main()
{
	int x,y,i=1,sum=1;

	printf("enter x = ");
	scanf("%d",&x);

	printf("enter y = ");
	scanf("%d",&y);

	while(i<=y)
	{
		sum=sum*x;
		i++;
	}
	
	printf("add = %d",sum);
}