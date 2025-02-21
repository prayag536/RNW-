#include <stdio.h>

int main()
{   int p ;
    int r ;
    int n ;
    printf("input principal amount :");
    scanf("%d", &p); 
    printf("input rate amount :");
    scanf("%d", &r);
    printf("input number of month amount :");
    scanf("%d", &n);
    
    float j = (float)(p * r * n) / 100;
    printf(" simple interest is :%.2f  ", j);
    
    return 0;
}