#include <stdio.h>

int main()
{
    int i,j,b;
    int a[b];
    float  avg =0;
    
    printf("enter array size:-");
    scanf ("%d",&j);
    for (i=1; i<=j; i++)
    {
        printf("a[%d]",i-1);
        scanf ("%d",&a[b]);
        
        avg= a[b] + avg;
    }
    
    avg=avg/j;
    printf("average=%f", avg);

    return 0;
}