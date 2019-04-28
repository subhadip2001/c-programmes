#include <stdio.h>
 main()
 {
   int  i, j,m,n;
   printf("Enter number of rows and columns of first matrix\n");
   scanf("%d %d", &m,&n);
   int a[m][n], b[n][m];
   printf("Enter elements of first matrix\n");
  	 for (i=0;i<m;i++)
  	 {
  	   for (j = 0; j <n; j++)
      scanf("%d",&a[i][j]);	
	 }
	 for (i=0;i<m;i++)
	 {
	   for (j = 0; j <n; j++)
        b[i][j]=a[j][i]; 	
	 	
	 }
	 printf("transpose of the matrix:\n");
 
    for (i = 0; i <m; i++) 
	{
      for (j = 0; j < n; j++)
        printf("%d\t", b[i][j]);
 
      printf("\n");
    }
	 
  	   	
       
      
      
	
	 
      
   
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
