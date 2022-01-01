#include <stdio.h>

float interest();
void main()
{
	 interest();
}
float interest()
{
	float p,r,n;

	printf("enter amount = ");
	scanf("%f",&p);

	printf("enter percentage = ");
	scanf("%f",&r);

	printf("enter year = ");
	scanf("%f",&n);

	printf("interest = %f",(p*r*n)/(100));
}