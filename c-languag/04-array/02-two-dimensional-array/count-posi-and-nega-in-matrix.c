#include <stdio.h>
void main()
{
    int x, y, i, j,a=0,b=0,c=0;

    printf("how many row in matrix = ");
    scanf("%d", &x);

    printf("how many colum in matrix = ");
    scanf("%d", &y);

    int array[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d row in %d colum = ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
            if (array[i][j]  == 0)
            {
                a++;
            }
            else if (array[i][j] % 2 == 0)
            {
                b++;
            }
             else 
            {
                c++;
            }

        }
    }
     printf("zer number is %d \n",a);
    printf("even number is %d \n",b);
	printf("odd number is %d \n",c);
}