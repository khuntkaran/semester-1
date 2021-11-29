#include<stdio.h>
void main()
{
	int a,b,c,x;

	printf("enter a = ");
	scanf("%d",&a);

	printf("enter b = ");
	scanf("%d",&b);

	printf("enter c = ");
	scanf("%d",&c);

	x =(a>b)?(a):(b);

	printf("multiply = %d",x*c);
	
}