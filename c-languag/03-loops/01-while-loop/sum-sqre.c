 #include<stdio.h>
 void main()
 {
 	int n,i,sum,k;
 	i=1;
 	sum=0;
 	printf("enter n = ");
 	scanf("%d",&n);

 	while(i<=n)
 	{
        k=i*i;
 		sum=sum+k;
 		i++;

 		
 	}
 	printf("add = %d",sum);
 }