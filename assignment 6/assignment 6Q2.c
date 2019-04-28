#include<stdio.h>
int gcd(int x,int y);
main()
{
	int a,b,c,GCD;
	printf("enter the three integers:   ");
	scanf("%d %d %d",&a,&b,&c);
	
	GCD=gcd(gcd(a,b),c);
	printf("\nGCD=%d",GCD);
	
}
int gcd(int x,int y)
{
	while(x!=y)
	{
		if(x>y)
		x=x-y;
		else
		{
			x=x+y;
			y=x-y;
			x=x-y;
			
		}
		
	}
return(x);
}
