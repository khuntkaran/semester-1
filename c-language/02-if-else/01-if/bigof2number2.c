#include<stdio.h>

void main (){
	int a;
	int b;
	
	printf("a number is\n");
	scanf("%d",&a);
	
	printf("b number is \n");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d a number is big\n",a);
	}
	if(b>a){
		printf("%d b number is big\n",b);
	}
	
}
