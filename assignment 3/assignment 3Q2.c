#include<stdio.h>
main()
{
	int a,b,t;
	printf("eneter a number:\n");
	scanf("%d",&a);
	t=a;
	b=0;
	while(a!=0)
	{
		b=(b*10)+(a%10);
		a=a/10;

	}
	if(t==b)
	printf("the number is palindrome");
	else
	printf("the number is not palindrome");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
