#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter the row number you want to print:");
	scanf("%d",&n);
	printf("\n");
	 
	 i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
		printf("* ");
		j++;
		}
	i++;	
	printf("\n");
		
	}
}
