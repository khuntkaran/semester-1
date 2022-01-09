#include <stdio.h>
void main()
{
	int i;
	char name[5];
	char *n=name;

	printf("enter name = ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("velue = %c\n",*(n+i));
	}
}