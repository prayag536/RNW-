#include <stdio.h>

int main() 
{
  int i,j,
  a = 0;

  for (i=1; i<=9; i++)
  { int l = 1;
    
    i<=5?a++:a--;
    for (j=1; j<=9; j++)
      {
       if(j<=6-a || j>=4+a)
      {
      	   printf("%d",l);
      	    j<5? l++:l--;
      }
       else
       {
           printf(" ");
          if(j==5)l--;  
      }
      }
      printf("\n");
      
  }
 
  return 0;
}