#include <stdio.h>
void main()
{
	int x,j=0,p,t,k;

	printf("enter x = ");
	scanf("%d",&x);

	while(x>0)
	{  
		p=x%10;
		t=p*10;
		j=j+t;
		x=x/10;
		if(x<10){
			j=j+x;
			break;
		}	

	}
   printf("r-no = %d",j);
  

}