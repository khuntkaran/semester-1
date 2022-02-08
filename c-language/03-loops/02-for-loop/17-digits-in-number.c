#include <stdio.h>
void main()
{
	int x,j,p;

	printf("enter x = ");
	scanf("%d",&x);

	for(j=0;x>0;x=x/10)
	{  
		p=x%10;
		j=j+1;
		
		

	}
   printf("digits = %d",j);
  

}