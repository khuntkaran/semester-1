 #include<stdio.h>
 void main()
 {
 	int n,i,sum,k;
 	
 	sum=0;
 	printf("enter n = ");
 	scanf("%d",&n);

 	for(i=1;i<=n;i++)
 	{
        k=i*i;
 		sum=sum+k;


 		
 	}
 	printf("add = %d",sum);
 }