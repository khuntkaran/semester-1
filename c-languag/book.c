#include<stdio.h>

struct book
{
	char titel[50];
	char name[50];
	char pablication[50];
	int price;
}b1,b2,b3;
void main()
{

	printf("enter book titel = ");
	scanf("%s",b1.titel);

	printf("enter book author name = ");
	scanf("%s",b1.name);

	printf("enter book pablication name = ");
	scanf("%s",b1.pablication);

	printf("enter book price = ");
	scanf("%d",&b1.price);

    printf("book name is = %s\n",b1.titel);
    printf("book author name is = %s\n",b1.name);
    printf("book pablication name is = %s\n",b1.pablication);
    printf("book price is = %d\n",b1.price);


}