#include <stdio.h>
struct cricket
{
    char name[10];
    char t_name[10];
    float avg;
};
void main()
{
    struct cricket player[50];
    int i;

    for (i = 0; i < 50; i++)
    {
        fflush(stdin);
        printf("enter player %d name  = ", i + 1);
        gets(player[i].name);
        printf("enter player %d team-name  = ", i + 1);
        gets(player[i].t_name);
        printf("enter player %d batting average = ", i + 1);
        scanf("%f", &player[i].avg);
    }

    for(i=0;i<50;i++)
	{
		printf("%d player name = %s\n",i+1,player[i].name);
		
		printf("%d player team name = %s\n",i+1,player[i].t_name);

		printf("%d player batting average = %f\n",i+1,player[i].avg);
		
	}
}