#include<stdio.h>
main()
{
	int aa[20],i,c,n,count=0,pos;
	printf("how many numbers do u want to take:");
	scanf("%d",&n);
	printf("enter the values:\n");
	for(i=0;i<n;i++)
	 scanf("%d",&aa[i]);
	printf("enter the number u want to check:");
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		if(aa[i]==c)
		 {
		 	count++;
		    pos=i+1;
		 }
	
	}
	if(count==1)
	printf("\nthe number %d is present in the %dth position",c,pos);
	else
	printf("\nthe number %d is not present ",c);	

}
