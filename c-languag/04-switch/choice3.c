#include<stdio.h>
void main()
{
    float no1,no2;
    int x;

    printf("enter no1 = ");
    scanf("%f",&no1);

    printf("enter no2 = ");
    scanf("%f",&no2);

    printf(" 1 = addition\n 2 = subtraction\n 3 = multiplication\n 4 = division\n");
    printf("enter your choice = ");
    scanf("%d",&x);

    switch(x)
     {

        case 1 :
        printf("no1+no2 = %f",no1+no2);
       
        case 2 :
        printf("no1-no2 = %f",no1-no2);
      
        case 3 :
        printf("no1*no2 = %f",no1*no2);
       
         case 4 :
        printf("no1/no2 = %f",no1/no2);
        

        default:
        printf("your choice is invalid");
    
     }
}