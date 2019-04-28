#include <stdio.h>
 main()
{
  int  i, j, k,row1,coloumn1,row2,coloumn2, sum = 0;
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d %d", &row1, &coloumn1);
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d %d", &row2, &coloumn2);
  int first[row1][coloumn1], second[row2][coloumn2], multiply[row1][coloumn2];
  if (coloumn1 == row2)
  {
  	 printf("Enter elements of first matrix\n");
  	 for (i=0;i<row1;i++)
  	 {
  	   for (j = 0; j < coloumn1; j++)
      scanf("%d",&first[i][j]);	
	   }
      
    printf("Enter elements of second matrix\n");
 
    for (i = 0; i < row2; i++)
    {
      for (j = 0; j < coloumn2; j++)
        scanf("%d", &second[i][j]);	
    	
	}
      
 
    for (i = 0; i < row1; i++)
   {
      for (j = 0; j < coloumn2; j++)
	 {
        for (k = 0; k <coloumn1 ; k++) 
		{
          sum = sum + first[i][k]*second[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < row1; i++) 
	{
      for (j = 0; j < coloumn2; j++)
        printf("%d\t", multiply[i][j]);
 
      printf("\n");
    }
  }
     
  else
  {
  	printf("The matrices can't be multiplied with each other.\n"); 
  }
}
  
