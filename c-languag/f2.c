#include<stdio.h>
int sum();
void main()
{
	int x;
	x=sum();
	printf("addition = %d",x);
}
int sum()
{
	int no1,no2,add;

	printf("enter no1 = ");
	scanf("%d",&no1);

	printf("enter no2 = ");
	scanf("%d",&no2);

	add=no1+no2;
	return add;
	
}
