#include <stdio.h>
void main()
{

	int x,no1,no2;
	

	printf("enter valu = ");
	scanf("%d",&no1);

	printf("enter valu = ");
	scanf("%d",&no2);

	x=no1;
	
	while(x<=no2)
	{
		if (x%2==0 && x%3!=0)
		{
			printf("%d\n",x);
		}
		
		x++;
	}
}
