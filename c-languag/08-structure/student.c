#include<stdio.h>
struct student_record
{
    char name[10],barnch[10];
    int marcks;

};
void main()
{
    struct student_record student[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        fflush(stdin);
        printf("enter student %d name  = ", i + 1);
        gets(student[i].name);
        printf("enter student %d branch  = ", i + 1);
        gets(student[i].barnch);
        printf("enter student %d totel marks = ", i + 1);
        scanf("%d", &student[i].marcks);
    }

    for(i=0;i<10;i++)
	{
		printf("student %d name = %s\n",i+1,student[i].name);
		
		printf("student %d branch = %s\n",i+1,student[i].barnch);

		printf("student %d totel marks = %d\n",i+1,student[i].marcks);
		
	}
    
}
