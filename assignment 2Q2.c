#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,y;
	float z,x1,x2,dis;
	printf("enter the values of a,b,c:\n");
	scanf("%f %f %f",&a,&b,&c);
	dis=b*b-4*a*c;
	z=-b/(2*a);
	y=(sqrt(-1*dis)/(2*a));
	if(dis==0)
   {
	 	printf("the roots are real and equal");
	 	printf("\n x1=x2=%f",z);
	 }
	else if(dis>0)
	{
		x1=z+(sqrt(dis)/(2*a));
		x2=z-(sqrt(dis)/(2*a));
		printf("the roots are real and unequal");
		printf("\n x1=%f,x2=%f",x1,x2);
	}
	else
	{
	 printf("the roots are imaginary and unequal");
	 printf("\n x1=%f+%fi,x2=%f-%fi",z,y,z,y);
	}
	
	
}
