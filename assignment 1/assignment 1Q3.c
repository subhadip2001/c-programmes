#include<stdio.h>
#include<math.h>
main()
{  
    int a,b,c;
    float s,area;
	printf("enter the three sides of a triangle:\n");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area of the triangle is:%f",area);
	

}
