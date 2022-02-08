 #include<stdio.h>
 void main()
 {
 	float n,i,sum,ave=0,k;
 	i=1;
 	sum=0;
 	printf("enter n = ");
 	scanf("%f",&n);

 	while(i<=n)
 	{
 		sum=sum+i;
         ave=ave+1;
 		i++;
 	}
 	printf("add = %f\n",sum);
     k=sum/ave;
    printf("average = %f",k); 
 }