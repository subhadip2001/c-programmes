#include<stdio.h>
main()
{
	int m;
	printf("enter the number:\n");
	scanf("%d",&m);
	if (m>=90)
	printf("your grade is O");
	if (m>=80&&m<90)
	printf("your grade is E");
	if (m>=70&&m<80)
	printf("your grade is A");
	if (m>=60&&m<70)
	printf("your grade is B");
	if (m>=50&&m<60)
	printf("your grade is C");
	if (m>=40&&m<50)
	printf("your grade is D");
	if (m<40)
	printf("you are failed");
	
}
