#include<stdio.h>
void main()
{
	int x,y,i,j;

	printf("how many roll no  = ");
	scanf("%d",&x);

	printf("how many subject = ");
	scanf("%d",&y);

	int array[x][y];

	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("roll no %d subject %d  = ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}

	for ( i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("roll no %d subject %d = mark is %d",i+1,j+1,array[i][j]);
			printf("\n");
		}
		
	}
	
}