#include <stdio.h>
void main()
{
    int array[5][3], i, j;
    float avg,sum;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("student %d subject %d mark = ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

     for (i = 0; i < 5; i++)
    {
        sum=0.0;
        for (j = 0; j < 3; j++)
        {
          sum=sum+ array[i][j] ;
        }
        avg=sum/3;
        printf("%d total = %.1f\n",i+1,sum);
        printf("%d average = %.2f\n",i+1,avg);
    }

}