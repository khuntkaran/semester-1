#include <stdio.h>
struct time
{
	int hour, min, sec;
}data1,data2,data3;
void main()
{
	
	
	
		printf("enter 1 hour  = ");
		scanf("%d", &data1.hour);
		printf("enter 1 min = ");
		scanf("%d", &data1.min);
		printf("enter 1 sec = ");
		scanf("%d", &data1.sec);

		printf("enter 2 hour  = ");
		scanf("%d", &data2.hour);
		printf("enter 2 min = ");
		scanf("%d", &data2.min);
		printf("enter 2 sec = ");
		scanf("%d", &data2.sec);

		printf("enter 3 hour  = ");
		scanf("%d", &data3.hour);
		printf("enter 3 min = ");
		scanf("%d", &data3.min);
		printf("enter 3 sec = ");
		scanf("%d", &data3.sec);
	
		printf("1 time = %d : %d : %d\n",data1.hour, data1.min, data1.sec);
		printf("2 time = %d : %d : %d\n",data2.hour, data2.min, data2.sec);
		printf("3 time = %d : %d : %d\n",data3.hour, data3.min, data3.sec);
	
}