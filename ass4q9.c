#include<stdio.h>
main()
{
	int i,j,t,n,min;
	printf("enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<n-1;i++)
     {
     	min=i;
     	for(j=i+1;j<n;j++)
     	{
     		
     		if(a[j]<a[min])
     		 min=j;
		 }
       t=a[min];
	   a[min]=a[i];
	   a[i]=t;	
     
	 }
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	{
		
	  printf(" %d ",a[i]);	
		
	}
	
}
	
