#include<stdio.h>
float ser1(int );
int ser2(int );
main()
{
	int i,n;
	float sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1/(float)i;
	}
	printf("the result is:%f",sum);
	
	ser1(n);	
}

float ser1(int n)
{
	int fact=1,i;
	float sum=0;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+1/(float)fact;
	}
	printf("\nthe result is:%f",sum);
	ser2(n);
	
}
int ser2(int n)
{
	int sum1=0,sum2=0,i;
	for(i=1;i<=n;i++)
	{
		sum1=sum1+i;
		sum2=sum2+sum1;
	}
	printf("\nthe result is:%d",sum2);	
}

