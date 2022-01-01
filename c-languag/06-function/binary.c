#include<stdio.h>
#include<math.h>
int binary(int a);
void main()
{
    int x;

    printf("enter number = ");
    scanf("%d",&x);
     
    binary(x);    
}
int binary(int a)
{
    int i,j,k,l;

    for (i=1,k=0,l=0;i<=a;l++)
    {
      k=k+pow(2,l);
        i=k;
    }
    l--;
    
    for(i=a;(i>0 || l>=0);l--)
    {
        if(i>=pow(2,l))
        {
            printf("1");
            i=i-pow(2,l);   
        }
        else
        {
            printf("0");
        }
    }   
}