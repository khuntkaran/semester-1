#include<stdio.h>
int sum(int ,int);
void main()
{
	int no1,no2;

	printf("enter no1 = ");
	scanf("%d",&no1);

	printf("enter no2 = ");
	scanf("%d",&no2);
	sum(no1,no2);
}
int sum(int a,int b)
{
	int add;

	

	add=a+b;

	printf("addition = %d",add);
}
