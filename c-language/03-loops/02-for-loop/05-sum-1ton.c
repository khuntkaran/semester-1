#include <stdio.h>
void main()
{
	int n, i, sum;
	sum = 0;
	printf("enter n = ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("add = %d", sum);
}