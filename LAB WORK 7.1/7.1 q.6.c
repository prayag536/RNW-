#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1; i<=5; i++)
  {
    // Inner loop
      for (j=1; j<=5; j++)
      {
       if(j <=6-i)
      	 if (j%2 == 0)
      	 {
                printf("0");
      	 }
      	 else
      	 {
      	        printf("1");
      	 }
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}