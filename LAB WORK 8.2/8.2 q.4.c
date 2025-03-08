#include <stdio.h>

int main()
{
    int row=5, column =5, sum = 0;
    
    

    int a[row][column];

    for (int i = 0; i<row; i++)
    {
        for (int j = 0; j< column; j++)
        {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int n = 0; n < column; n++)
    {  
        sum += a[0][n];
    }
    for (int m = 1; m < row; m++) 
    {  
        sum += a[m][column - 1];
    }
    if (row > 1) 
    { 
        for (int n = column - 2; n >= 0; n--) 
        {  
            sum += a[row - 1][n];
        }
    }
    if (column > 1)
    { 
        for (int m = row - 2; m > 0; m--) 
        {  
            sum += a[m][0];
        }
    }
    
    for(int i=0;i<5;i++)
    { 
        for(int j=0;j<5;j++)
        {  
            if(j==0||j==1||j==2||j==3||j==4||i==1||i==5)
            {  
           
               if((i==1&&j==1||i==1&&j==2||i==1&&j==3||i==2&&j==1||i==2&&j==2||i==2&&j==3||i==3&&j==1||i==3&&j==2||i==3&&j==3))
               
                
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",a[i][j]);
                }
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    

    printf("Sum of the border elements: %d\n", sum);

    return 0;
}