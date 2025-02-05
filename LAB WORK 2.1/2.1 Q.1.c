/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=12;
    int b= 6;
    int c;
    
    c= a+ b;
    
    printf("addition of %d and %d is %d \n",a,b,c);
    
    c= a- b;
    
    printf("subtraction of %d and %d is %d \n",a,b,c);
    
    c= a* b;
    
    printf("multiplication of %d and %d is %d \n",a,b,c);
    
    c= a/ b;
    
    printf("Divison of %d and %d is %d \n",a,b,c);
    
    c= a% b;
    
    printf("modulo of %d and %d is %d \n",a,b,c);
    
    return 0;
}