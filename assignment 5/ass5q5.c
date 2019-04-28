#include<stdio.h>
#include<string.h>
void swap(char*t,char*s);
void main()
{
	char aa[10][15];
	int n,i,dd,j;
	printf("how many name you want to store:");
	scanf("%d",&n);
	printf("enter the names:\n");
	for(i=0;i<n;i++)
	scanf("%s",aa[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			dd=strcmp(aa[i],aa[j+1]);
			if(dd>0)
			swap(aa[i],aa[j+1]);
		
		}
	
	}
	printf("the sorted names are: \n");
	for(i=0;i<n;i++)
	printf("%s\n",aa[i]) ;
         
}
void swap(char*t,char*s)
{
    char p;
	int i;
	for(i=0;i<15;i++)
	{
	   p=*t;
	   *t=*s;
	   *s=p;
	   t++;
	   s++;
	}	
	
}

