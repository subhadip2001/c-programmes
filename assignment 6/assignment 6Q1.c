#include<stdio.h>
int fact(int x);
main()
{
	int n,r;
	float nCr;
	printf("enter thne value of n and r: ");
	scanf("%d %d",&n,&r);
	nCr=fact(n)/(fact(r)*fact(n-r));
	printf("\nnCr=%.2f",nCr);
}
int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		
		fact=fact*i;
	}
return(fact);
	
}
