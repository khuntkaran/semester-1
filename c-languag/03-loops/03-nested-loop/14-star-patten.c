// output:
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
#include <stdio.h>
void main()
{
    int n, i, j,k;

    printf("enter n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (j = 1; j <= n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        else if (i < n)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 2)
                {
                    for (k=1; k<=(2*n)-4; k++)
                    {
                        printf(" ");
                        j++;
                    }
                }
                printf("* ");
            }
            printf("\n");
        }
    }
}