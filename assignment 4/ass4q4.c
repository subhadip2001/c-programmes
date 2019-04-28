#include<stdio.h>
void main()
{
	int i,j,m,n;
	
	printf("enter the dimension of the matrices:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n];
	printf("enter the elements of a matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("enter the elements of b matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	printf("the c matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}	
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",c[i][j]);
	printf("\n");
	}

}
	
	
	
	
	
	
	
	
	
	

