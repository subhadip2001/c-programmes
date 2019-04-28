#include<stdio.h>
void strong(int x);
void main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	strong(n);
}
void strong(int a)
{
   int bb,temp,fact,sum=0,i;
   temp=a;
   while(temp!=0)
   {
        bb=temp%10;
        fact=1;
        for(i=1;i<=bb;i++)
        {
        	fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;	
   }	
   if(sum==a)
   printf("the number is a strong number");
  else
  printf("the number is not a strong number");
	
}
 
