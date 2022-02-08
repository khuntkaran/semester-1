#include<stdio.h>
 int main()
 {
 int rating;

    printf("enter your rating 1, 2, 3 \n");
    scanf("%d",&rating);

    switch(rating)
	{
	
        case 1 :
        printf("your rating is good");
     	break;
        case 2 :
        printf("your rating is very good");
        break;
        case 3 :
        printf("your rating is exelent");
        break;
        default :
    	printf("invalid rating");
    	break;
    
    }

 }	
