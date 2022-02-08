#include<stdio.h>
void main()
{
	int a[5],i,c=0,j,temp;
	int *p;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("enter %d = ",i+1 );
		scanf("%d",p+i);
	}
	for(i=0;i<5;i++)
	{
		printf("entered velue = %d\n",*(p+i));
	}

	for(i=0;i<5;i++)
	{
		c=c+*(p+i);
	}
	printf("addtion = %d\n",c);

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
		
	}

	for(i=0;i<5;i++)
	{
		printf("velue = %d\n",*(p+i));
	}
}