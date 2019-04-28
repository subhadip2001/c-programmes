#include<stdio.h>
#include<string.h>
void reverse(char *,char *);
void main()
{   
    int i;
	char aa[20];
	char bb[20];
	printf("enter a string:");
	gets(aa);
	reverse(bb,aa);
	printf("the original string:%s",aa);
	printf("\nthe reversed string:%s",bb);
	i=strcmp(aa,bb);
	if(i==0)
	printf("\nthe string is palindrome");
	else
	printf("\nthe string is not palindrome");
	

}
void reverse(char *t,char *s)
{
	int i=0,j;
	while(*s!='\0')
	{
		s++;
		i++;
		
	}
	
	s--;
	for(j=0;j<i;j++)
	{
		*t=*s;
		t++;
		s--;
	}
	*t='\0';
}
