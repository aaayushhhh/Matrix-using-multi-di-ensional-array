#include <stdio.h>
int main()
{
  int i , j;
  int Sum=0;
  int arr[3][3];
  // reading of data
  for(i=0;i<=2;i++)
  {
  for(j=0;j<=2;j++)
  {
      
    printf("\n Enter the Element for array [%d][%d] = ",i,j);
	 scanf("%d",&arr[i][j]);
     }
  }
int *p = &i;
int *ptr = &j; 
  // printing of data
  printf("The matrix is :\n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
  {
  	
      printf("  %d",arr[*p][*ptr]);         // printf single row
  }
    printf("\n");                       // printf new line
}
for(i= 0; i< 3; i++)
  	{
   		Sum = Sum + arr[*p][*p];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
}


