

#include <stdio.h>

int main()
{
    int r;
    int h;
    
    printf("input a first value:");
    scanf("%d", &r);
    
    printf("input a second value:");
    scanf("%d", &h);
    
    if (r<h)
    {
        printf("%d minimum value:", r); 
    }
    
    else
    {
        printf("%d minimum value:", h); 
    }
    
    return 0;
}