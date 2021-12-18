#include<stdio.h>

void main(){
	float dpo,pa,year;
	
	printf("diposit is \n",dpo);
	scanf("%f",&dpo);
	
	printf("parshnteg is \n", pa);
	scanf("%f", &pa);
	
	printf("year is \n");
	scanf("%f", &year);
	
	printf("your intrest is %f", (dpo*pa*year)/100 );

}

