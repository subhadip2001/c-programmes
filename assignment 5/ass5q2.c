#include<stdio.h>
#include<string.h>
void main()
{
  int i=0,count=0;
  char aa[50];
  printf("enter a string:");
  gets(aa);	
 
  while(aa[i]!='\0')
  {
  	if(aa[i]=='a'||aa[i]=='A'||aa[i]=='e'||aa[i]=='E'||aa[i]=='i'||aa[i]=='I'||aa[i]=='o'||aa[i]=='O'||aa[i]=='u'||aa[i]=='U')
  	 count++;
  	i++; 
  }
  printf("the number of the vowel in the string is: %d",count);
}
  
