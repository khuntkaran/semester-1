#include <stdio.h>
void main()
{
	int x,j,p=0,t=0,z;

	printf("enter x = ");
	scanf("%d",&x);

	z=x;
	while(x>0)
	{
		j=x%10;
		x=x/10;

		t=j*j*j;
		p=p+t;
		if(x<10){
			x=x*x*x;
			p=p+x;
			break;
		}

	}
   
   if(p==z) { 
   	printf("number is armstrong ");
   }
    
	else{
	 printf("number is not armstrong");
	}


//153 is armstrong
	

}