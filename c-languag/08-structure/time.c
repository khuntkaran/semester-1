#include <stdio.h>
struct time
{
	int hour, min, sec;
};
void main()
{
	struct time data[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("enter %d hour  = ", i + 1);
		scanf("%d", &data[i].hour);
		printf("enter %d min = ", i + 1);
		scanf("%d", &data[i].min);
		printf("enter %d sec = ", i + 1);
		scanf("%d", &data[i].sec);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d time = %d : %d : %d\n", i + 1, data[i].hour, data[i].min, data[i].sec);
	}
}