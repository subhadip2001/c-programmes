#include<stdio.h>
main()
{
	int i,j,t,n;
	printf("enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       t=a[i];
	   j=i;
	   while(j>0 && a[j-1]>t)	
    	{
    		a[j]=a[j-1];
    		j--;
		}
    	a[j]=t;
    	
	}
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	 printf(" %d ",a[i]);	

}
