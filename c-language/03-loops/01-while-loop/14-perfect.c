#include <stdio.h>
void main()
{
	int x,i=1,k=0;

	printf("enter x = ");
	scanf("%d",&x);

	while(i<x)
	{
		if (x%i==0)
		{
			
		
			
				k=k+i;
			
		}
		i++;
	}
	if(k==x){
		printf("number is perfect");
	}
	else{
		printf("number is not perfect");
	}


	//perfect no = 6,28,496
}

   
