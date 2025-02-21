#include <stdio.h>

int main()
{ int a,b,c ;
    printf("input First number:");
    
    scanf("%d",&a);
    
    printf("input second  number:");
    
    scanf("%d",&b);
     printf("input third  number:");
    
    scanf("%d",&c);
     
    
    ((a < b) && (a < c) ) ? printf("%d is minimum number",a) :
    (b < c) ? printf("%d is minimum number",b) : printf("%d is minimum number",c) ;
    
    }