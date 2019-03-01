#include<stdio.h>
main()
{
	int i,n,j,count;
	printf("enter the range:\n");
	scanf("%d",&n);
	printf("\nthe prime numbers are: ");
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
	    
	 if(count<=2)
  	printf(" %d ",i);
	   
    }
	

}
