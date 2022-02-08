#include <stdio.h>
void main()
{

	int x, no1, no2;

	printf("enter valu = ");
	scanf("%d", &no1);

	printf("enter valu = ");
	scanf("%d", &no2);

	for (x = no1; x <= no2; x++)
	{
		if (x % 2 == 0 && x % 3 != 0)
		{
			printf("%d\n", x);
		}
	}
}
