// output:
//    1
//   A B
//  2 3 4
// C D E F
// #include<stdio.h>
// void main()
// {
//     int n,i,j,k=1,a,m,b=2,p;
//     char l,t='A';

//     printf("enter n = ");
//     scanf("%d",&n);

//     for( i=1;i<=n;i=j)
//     {

//        for(m=k;m<n;m++)
//        {
//             printf(" ");
//        }
//        for ( j = i; j<i+k ; j++)
//        {
//            printf("%d ",j);

//        }
//        printf("\n");
//        k=k+2;

//         for(p=b;p<n;p++)
//        {
//             printf(" ");
//        }
//        for (l=t,a=1;a<=b;a++)
//        {
//            printf("%c ",t);
//            t++;
//        }
//         printf("\n");
//        b=b+2;
//     }

// }
#include <stdio.h>
void main()
{
    int n, i, j, k = 1, a, m, p;
    char l, t = 'A';

    printf("enter n = ");
    scanf("%d", &n);

    for (i = 1; k <= n; i = j)
    {

        for (m = k; m < n; m++)
        {
            printf(" ");
        }
        for (j = i; j < i + k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;

        if (k <= n)
        {
            for (p = k; p < n; p++)
            {
                printf(" ");
            }
            for (l = t, a = 1; a <= k; a++)
            {
                printf("%c ", t);
                t++;
            }
            printf("\n");
            k++;
        }
    }
}