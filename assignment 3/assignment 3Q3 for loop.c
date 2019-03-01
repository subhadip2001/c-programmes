#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter the number of rows you want to print:\n");
	scanf("%d",&n);
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("* ");
	
	printf("\n");
    }

}
