#include <stdio.h>
void main()
{
	int x;

	printf("enter month = ");
	scanf("%d",&x);

	switch(x)
	{                                                     
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
		printf("days = 31");
		break ;

		case 2 :
		printf("days = 28");
		break ;
		
		case 4 :
		case 6 :
		case 9 :
		case 11 :
		printf("days = 30");
		break ;
		
		default:
		printf("your valu is invalid");
		
	}
}