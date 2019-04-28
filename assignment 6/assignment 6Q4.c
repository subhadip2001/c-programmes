#include<stdio.h>
void reverse(char *,char *);
void main()
{
	char aa[20];
	char bb[20];
	printf("enter a string:");
	gets(aa);
	reverse(bb,aa);
	printf("the original string:%s",aa);
	printf("\nthe reversed string:%s",bb);

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
