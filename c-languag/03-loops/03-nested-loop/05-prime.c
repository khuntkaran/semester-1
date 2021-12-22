#include <stdio.h>
void main()
{
	int x,i,k,y,j;

	printf("enter x = ");
	scanf("%d",&x);

    printf("enter y = ");
	scanf("%d",&y);

	for(i=x; i<=y; i++)
	{
        j=0;
		for(k=2;k<i-1;k++)
        {
            if(i%k==0)
            {
                // printf("vulue %d is not prime\n",i);
                j=j+1;
                
            }
        }
		if(j==0){
	        printf("value %d is prime\n",i);
        }
	}
	
	
}