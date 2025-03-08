#include <stdio.h>

int main()
{
    int i, j, a;
    
    for (i=1; i<=9; i++)
    {
        a=(i<=5)?(6-i):(i-4);
        for (j=1; j<=a; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    return 0;
}