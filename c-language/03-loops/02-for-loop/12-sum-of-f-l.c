#include <stdio.h>
void main()
{
	int x,j,p,k;

	printf("enter x = ");
	scanf("%d",&x);

	for(k=x,p=0;x>0; x=x/10)
	{
	
		
        if(x==k){
            	j=x%10;
                p=p+j;
        }
		
		if(x<10){
			p=p+x;
			break;
		}
       
	}
    
    printf("sum of digit = %d",p);


	

}