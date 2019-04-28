#include<stdio.h>
main()
{
	int aa[20],i,n,sum=0;
	printf("how many numbers do u want to take:");
	scanf("%d",&n);
	printf("enter the values:\n");
	for(i=0;i<n;i++)
	 scanf("%d",&aa[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+aa[i];
	
	} 
	printf("the sum of the %d integers is %d",n,sum);
}
