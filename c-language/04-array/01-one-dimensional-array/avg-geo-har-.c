#include<stdio.h>
#include<math.h>
void  main()
{
	int n,i;
    float avg=0.0,geo=1.0,c=0;

	printf("how many enter value = ");
	scanf("%d",&n);

	int array[n];



	for(i=0;i<n;i++)
	{
		printf("number %d is = ",i+1);
		scanf("%d",&array[i]);

        avg=avg+array[i];
        geo=geo*array[i];
	}
	printf("average = %f\n",avg/n);
    printf("geometric = %f\n",sqrt (geo));
     printf("harmonic = %f\n",geo/(avg/n));
}