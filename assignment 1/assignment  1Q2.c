#include<stdio.h>
main()
{
	
	int x,y,t;
	
	printf("enter the two integer:\n");
	scanf("%d %d",&x,&y);
	
	printf("before swapping\nfirst integer=%d\nsecond integer =%d\n",x,y);
	
	t=x;
	x=y;
	y=t;
	
	printf("after swapping\nfirst integer=%d\nsecond integer=%d\n",x,y);
	
	
	
	
	
}
