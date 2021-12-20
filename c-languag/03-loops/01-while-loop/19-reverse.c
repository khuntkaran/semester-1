#include <stdio.h>
void main()
{
	int x,j=0,p;

	printf("enter x = ");
	scanf("%d",&x);

	while(x>0)
	{  
		p=x%10;
		j=(j*10)+p;
		x=x/10;
		

	}
   printf("r-no = %d",j);
  

}