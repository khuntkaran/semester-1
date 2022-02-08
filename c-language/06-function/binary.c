#include <stdio.h>
int binary(int a);
void main()
{
    int x, y;

    printf("enter number = ");
    scanf("%d", &x);

    y = binary(x);

    printf("binary value = %d", y);
}
int binary(int a)
{

    if (a == 0)
    {
        return 0;
    }
    else
    {
        return (a % 2 + 10 * binary(a / 2));
    }
}
// int binary(int a)
// {
//     int i,j,k,l;

//     for (i,k=0,l=0;i<=a;l++)
//     {
//       k=k+pow(2,l);
//         i=k;
//     }
//     l--;

//     for(i=a;(i>0 || l>=0);l--)
//     {
//         if(i>=pow(2,l))
//         {
//             printf("1");
//             i=i-pow(2,l);
//         }
//         else
//         {
//             printf("0");
//         }
//     }
// }