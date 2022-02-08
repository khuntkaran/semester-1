#include <stdio.h>
void main()
{
	int x,j,p,t,z,k;

	printf("enter x = ");
	scanf("%d",&x);


	for(z=x;x>0;x=x/10)
	{
		j=x%10;
		k=x/10;

		t=j*j*j;
		p=p+t;
		if(k<10){
			x=k*k*k;
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

	

}