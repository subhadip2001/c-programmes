#include<stdio.h>
#include<string.h>
void main()
{
  int i=0,count=0;
  char a,aa[50];
  printf("enter a string:");
  gets(aa);	
  printf("which charecter do you want to check:");
  scanf("%c",&a);
  while(aa[i]!=0)
  {
  	if(aa[i]==a)
  	 count++;
  	i++; 
  }
  printf("the number of the checking charecter %c in the string is:%d",a,count);
  
}


