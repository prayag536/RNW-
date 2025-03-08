#include <stdio.h>

int main()
{
    int i,j;
    
        for(i=1; i<=5; i++)
        {  int a=1 ;
            for(j=1; j<=9; j++)
                {
                        if(j<= 6-i||j>= 4+i)
                        {
                            printf("%d",a);
                             j<5? a++:a--;
                        }
                        else
                        {   
                            printf(" ");
                            if (j == 5) a--; 
                        }
                }   
                printf("\n");
                   
        }
    return 0;
}