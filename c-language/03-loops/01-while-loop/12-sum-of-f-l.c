#include <stdio.h>
void main()
{
	int x,j,p=0,k;

	printf("enter x = ");
	scanf("%d",&x);
    k=x;
	while(x>0)
	{
	
		
        if(x==k){
            	j=x%10;
                p=p+j;
        }
		
		if(x<10 && k>10){
			p=p+x;
			break;
		}
        x=x/10;
	}
    
    printf("sum of digit = %d",p);


	

}