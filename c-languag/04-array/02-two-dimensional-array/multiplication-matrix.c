#include<stdio.h>
void main()
{
	int x,y,i,j,c,l,k;

	printf("how many row in matrix 1 = ");
	scanf("%d",&x);

	printf("how many colum in matrix 1 and row in matrix 2 = ");
	scanf("%d",&l);

	printf("how many colum in matrix 2 = ");
	scanf("%d",&y);

	int array[x][l],array2[l][y];

	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < l; j++)
		{
			printf("frist matrix %d row in %d colum = ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}

	for ( i = 0; i < l; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("second matrix %d row in %d colum = ",i+1,j+1);
			scanf("%d",&array2[i][j]);
		}
	}
	printf("matrix 1 is\n");
	for ( i = 0; i < x; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d ",array[i][j]);
			
		}
		printf("\n");
	}
	printf("matrix 2 is\n");
	for ( i = 0; i < l; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ",array2[i][j]);
			
		}
		printf("\n");
	}
	printf("multiplication of matrix 1 and matrix 2\n");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			
			for ( k = 0,c=0; k < l; k++)
			{
				c=c + (array[i][k] * array2[k][j]);
			}
			printf("%d ",c);
		}	
		printf("\n");
	}
	
}
