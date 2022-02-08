#include <stdio.h>
void main()
{
	int x,j,p;

	printf("enter x = ");
	scanf("%d",&x);

	for(p=0;x>0;x=x/10)
	{
		j=x%10;
		p=p+j;
		
	}
    
    printf("sum of digit = %d",p);
}