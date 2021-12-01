#include<stdio.h>

void main (){
	int a,h,k;
	printf("Enter tha a number = \n");
	scanf("%d",&a);
	 h = a%10;
     k = h%2;
	if(k%2==0){
		printf("%d is even\n",a);
    }
	
    else if(k%2!=0){
		printf("%d is odd\n",a);
    }
	
	else{
		printf("%d is 0\n",a);
    }
	
	
}
