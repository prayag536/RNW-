#include <stdio.h>

int main()
{
    int r;
    printf("Enter the size of array:");
    scanf("%d", &r);
    float a[r];
    for (int i = 0; i < r; i++)
    {
        printf("a[%d]:", i);
        scanf("%f",&a[i]); 
    }
    printf("Negative numbers in the array: ");
    for (int i = 0; i < r; i++) 
    {
        if (a[i] < 0)
        {
            printf("%.f ", a[i]);
        }
        printf("\n");
        
    }
    return 0;
}

------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];

    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}

------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int r, c;
    printf("input number of rows:");
    scanf("%d", &r);
    printf("input number of columns:");
    scanf("%d", &c);

    int x[r][c]; 
    int y[c][r]; 
    
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            printf("x[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            y[i][j] = x[j][i];
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}

------------------------------------------------------------------------

#include <stdio.h>

int main() 
{
    int row, column, sum = 0;

    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
    scanf("%d", &column);
    
    int a[row][column]; 
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < column; j++) 
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int choice;
    printf("Enter 1 row sum, 0 column sum:");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int p;
        printf("Enter row number: ");
        scanf("%d", &p);
        
        if (p >= 0 && p < row) 
        {  
            sum = 0;  
            printf("Elements in row %d: ", p);
            
            for (int j = 0; j < column; j++) 
            {
                printf("%d, ", a[p][j]);
                sum += a[p][j];
            }
            printf("\nSum of row %d is: %d\n", p, sum);
        } else {
            printf("Invalid row number\n");
        }
    } else if (choice == 0) 
    {
        int g;
        printf("Enter column number:");
        scanf("%d", &g);
        
        if (g >= 0 && g < column) 
        {  
            sum = 0;  
            printf("Elements in column %d: ", g);
            for (int i = 0; i < row; i++) 
            {
                printf("%d, ", a[i][g]);
                sum += a[i][g];
            }
            printf("\nSum of column %d is: %d\n", g, sum);
        } else 
        {
            printf("Invalid column number\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}


------------------------------------------------------------------------