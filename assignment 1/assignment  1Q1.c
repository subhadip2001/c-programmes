#include<stdio.h>
main()
{
	int len,br,areat,pert;
	float r,cira,cirp;
	
	printf("enter the length and breadth of the rectangle and the radius of the circle:\n");
	scanf("%d %d %f",&len,&br,&r);
	
	areat=len*br;
	pert=2*(len+br);
	cira=(22.0/7)*r*r;
	cirp=2*(22.0/7)*r;
	printf("rectangle area=%d and perimeter=%d \n",areat,pert);
	printf("circle area=%f and circle perimeter=%f",cira,cirp);
	
	
}
