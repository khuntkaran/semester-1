#include <stdio.h>
void main()
{
	int x,j,p=0;

	printf("enter x = ");
	scanf("%d",&x);

	while(x>0)
	{
		j=x%10;
		x=x/10;

		p=p+j;
		if(x<10){
			p=p+x;
			break;
		}

	}
    
    printf("sum of digit = %d",p);


	

}