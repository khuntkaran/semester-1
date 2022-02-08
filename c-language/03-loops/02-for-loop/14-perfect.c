#include <stdio.h>
void main()
{
	int x,i,k;

	printf("enter x = ");
	scanf("%d",&x);

	for(i=1,k=0;i<=x;i++)
	{
		if (x%i==0)
		{
			
		
			if(i<x){
				k=k+i;
			}
		}

	}
	if(k==x){
		printf("number is perfect");
	}
	else{
		printf("number is not perfect");
	}

}

   
