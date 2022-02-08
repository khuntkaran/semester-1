#include<stdio.h>

void main ()
{
	int a;
	int b;
    int c;
	
	printf("a number is\n");
	scanf("%d",&a);
	
	printf("b number is \n");
	scanf("%d",&b);

    printf("c number is \n");
	scanf("%d",&c);
	
    if(a>b && a>c)
    {
		printf("%d a number is big\n",a);
	}
    if (b>c && b>a)
    {
        printf("%d b number is big\n",b); 
    }
    if (c>b && c>a)
    {
        printf("%d c number is big\n",c);
    }
	
}
