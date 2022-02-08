#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,D,r1,r2,z;

    printf("enter value \n");

    printf("a = ");
    scanf("%f",&a);

     printf("b = ");
    scanf("%f",&b);

     printf("c = ");
    scanf("%f",&c);

    d=(b*b)-(4*a*c);
    D=sqrt(d);     //for underroot
    z=sqrt(-d);     //for underroot

    if (d>0)
    {
        printf("r1 = %f \n",(-b+D)/(2*a));
        printf("r2 = %f \n",(-b-D)/(2*a));
    }

    else if (d==0)
    {
        printf("r1 = r2 = %f",(-b)/(2*a));    
    }
    
    else
    {
        printf("r1 = %f + i%f \n",(-b)/(2*a),(z)/(2*a));
        printf("r2 = %f - i%f \n",(-b)/(2*a),(z)/(2*a));
    }

    // case - 1 (d>0)
    // a = 1
    // b = 4
    // c = 3
    // r1 = -1.000000 
    // r2 = -3.000000
    
    // case - 2 (d==0)
    // a = 1
    // b = 2
    // c = 1
    // r1 = r2 = -1.000000

    // case - 3 (d<0)
    //  a = 2.3
    //  b = 4
    //  c = 5.6
    //  r1 = -0.869565 + i1.295623 
    //  r2 = -0.869565 - i1.295623
    
}