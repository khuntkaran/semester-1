#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter a = ");
	scanf("%d",&a);

	printf("enter b = ");
	scanf("%d",&b);

	printf("enter c = ");
	scanf("%d",&c);

	(a>b && a>c)?(printf("number a is big")):((b>a && b>c)?(printf("number b is big")):(printf("number c is big")));
}