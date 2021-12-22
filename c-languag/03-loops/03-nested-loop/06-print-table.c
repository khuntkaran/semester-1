#include <stdio.h>
void main()
{
	int x,i,y,j;

	printf("enter x = ");
	scanf("%d",&x);

    printf("enter y = ");
	scanf("%d",&y);

	for(i=1; i<=y; i++)
	{
       for(j=1;j<=x;j++)
       {
           printf("%d\t",i*j);
       }
       printf("\n");
	}
	
	
}