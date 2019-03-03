#include<stdio.h>
int add(int );
int swap(int );
main()
{
	int a,b;
	printf("enter the number: ");
	scanf("%d",&a);
	b=a/10;
	printf("the result is:%d",b);
	add(a);
}
int add(int a)
{
    int c,b,s;
	b=a%10;
	c=(a/10)%10;
	s=b+c;	
	printf("\nthe result is:%d",s);
	swap(a);
}
int swap(int a)
{
    int b,c,d,s;
	b=(a/100)*100;
	c=(a%10)*10;
	d=(a/10)%10;
	s=b+c+d;
	printf("\nthe result is:%d",s);		
}






