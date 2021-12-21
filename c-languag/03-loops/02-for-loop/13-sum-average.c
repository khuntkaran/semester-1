 #include<stdio.h>
 void main()
 {
 	float n,i,sum,ave,k;

 	
 	printf("enter n = ");
 	scanf("%f",&n);

 	for(i=1,sum=0,ave=0;i<=n;i++)
 	{
 		sum=sum+i;
         ave=ave+1;
 		
 	}
 	printf("add = %f\n",sum);
     k=sum/ave;
    printf("average = %f",k); 
 }