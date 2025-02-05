/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int r;
    printf("specify radius of the circle:-");
    scanf("%d", &r);
    int a= 3.14*r*r;
    
    printf("area of circle is %d",a);
    

    return 0;
}