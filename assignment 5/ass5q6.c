#include <stdio.h>
main ()
{
   int c = 0;
   char ch, s[1000];
 
   printf("Input a string\n");
   gets(s);
   
   while (s[c] != '\0') 
   {
      ch = s[c];
      if (ch >= 'a' && ch <= 'z')
         s[c] = s[c] - 32;  
      c++;  
   }
   
   printf("%s\n", s);
 
   return 0;
}
