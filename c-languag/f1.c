#include<stdio.h>
int sum();
void main()
{
	sum();
}
int sum()
{
	int no1,no2,add;

	printf("enter no1 = ");
	scanf("%d",&no1);

	printf("enter no2 = ");
	scanf("%d",&no2);

	add=no1+no2;

	printf("addition = %d",add);
}
