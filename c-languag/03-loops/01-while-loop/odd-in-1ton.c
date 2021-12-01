#include <stdio.h>
void main()
{
	int x,n;
	x=1;

	printf("enter valu = ");
	scanf("%d",&n);
	while(x<=n && x%2 != 0)
	{
		printf("%d\n",x);
		x+=2;
	}
}