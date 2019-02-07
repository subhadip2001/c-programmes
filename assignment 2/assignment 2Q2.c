#include<stdio.h>
#include<math.h>
 main()
{
	int a,b,c;
	float x,y,z;
	printf("enter the values of a,b and c:\n");
	scanf("%d %d %d",&a,&b,&c);
	z=(sqrt(b*b-4*a*c));
	x=(-b+z)/(2*a);
	y=(-b-z)/(2*a);
	if(z=0)
	printf("the root of the equation are:%f %f",x,y);
	else
	{
		if(z>0)
		printf("the root of the equation are:%f %f",x,y);
		else 
		printf("the root of the equation are:%f %f",x,y);
		
	}
}
