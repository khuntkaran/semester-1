#include<stdio.h>
void main()
{
	int x,y,i,j;

	printf("how many row in matrix = ");
	scanf("%d",&x);

	printf("how many colum in matrix = ");
	scanf("%d",&y);

	int array[x][y];

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d row in %d colum = ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ",array[i][j]);
			
		}
		printf("\n");
	}
	
}