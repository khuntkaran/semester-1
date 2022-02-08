#include <stdio.h>
void main()
{
	int x, n;

	printf("enter valu = ");
	scanf("%d", &n);
	for (x = 1; x <= n && x % 2 != 0; x += 2)
	{
		printf("%d\n", x);
	}
}