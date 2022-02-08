#include <stdio.h>

struct book
{
	char titel[50];
	char name[50];
	char pablication[50];
	int price;
};
void main()
{
	int n, i;

	printf("you want how many book data store = ");
	scanf("%d", &n);
	struct book b[n];

	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("enter %d book titel = ",i+1);
		gets(b[i].titel);

		printf("enter %d book author name = ",i+1);
		gets(b[i].name);

		printf("enter %d book pablication name = ",i+1);
		gets(b[i].pablication);

		printf("enter %d book price = ",i+1);
		scanf("%d", &b[i].price);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d book name is = %s\n",i+1, b[i].titel);
		printf("%d book author name is = %s\n", i+1,b[i].name);
		printf("%d book pablication name is = %s\n",i+1, b[i].pablication);
		printf("%d book price is = %d\n", i+1,b[i].price);
	}
}