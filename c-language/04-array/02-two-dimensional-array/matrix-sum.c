#include<stdio.h>
void main()
{
	int x,y,i,j;

	printf("how many row in matrix = ");
	scanf("%d",&x);

	printf("how many colum in matrix = ");
	scanf("%d",&y);

	int array[x][y],array2[x][y];

	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("frist matrix %d row in %d colum = ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}

	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("second matrix %d row in %d colum = ",i+1,j+1);
			scanf("%d",&array2[i][j]);
		}
	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ",array[i][j] + array2[i][j]);
			
		}
		printf("\n");
	}
	
}