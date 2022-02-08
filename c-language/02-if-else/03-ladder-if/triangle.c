#include<stdio.h>
void main()
{
    int x,y,z,a,b,c;
    
    printf("enter x = ");
    scanf("%f",&x);
     printf("enter y = ");
    scanf("%f",&y);
     printf("enter z = ");
    scanf("%f",&z);
    
    a = x*x;
    b = y*y;
    c = z*z;
    if ((x==y && x!=z) || (y==z && y!=x) || (x==z && x!=y))
    {
        printf("this triangle is isosceles");
    }
    else if (x==y && y==z )
    {
        printf("this triangle is equilateral");
    }
    else if (a+b==c || b+c==a || c+a==b )
    {
        printf("this triangle is right-angled");
    }
    else 
    {
        printf("this triangle is scalene");
    }

    

}