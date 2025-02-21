
#include <stdio.h>

int main()

{
    int a,b,c;
    
    printf("input a first value:");
    scanf("%d", &a);
    
    printf("input a second value:");
    scanf("%d", &b);
    
    printf("input a third value:");
    scanf("%d", &c);
    
    if (a<b)
    {
       if(a<c)
       {
          printf("%d the minimum is.\n", a); 
       }  
    
       else
       {
          printf("%d the minimum is.\n", c); 
       }
    }
    
    else 
     {
       if(b<c)
       {
          printf("%d the minimum is.\n", b); 
       }  
    
       else
       {
          printf("%d the minimum is.\n", c); 
       }
    }

    return 0;
}