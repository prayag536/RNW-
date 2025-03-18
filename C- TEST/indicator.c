#include <stdio.h>

int main()
{
    char str[100]; 
    char *ptr;    
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    ptr = str; 

   
    while (*ptr != '\0' && *ptr != '\n') 
    {
        length++;
        ptr++; 
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}


--------------------------------------------------------------------

#include <stdio.h>


int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    int rows, cols;
    printf("Enter the array size: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter the elements of array:\n");
    for (int i=0; i < rows; i++) 
    {
        for (int j=0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cubes of the elements:\n");
    for (int i=0; i < rows; i++) 
    {
        for (int j=0; j < cols; j++)
        {
            printf("%d ", cube(a[i][j]));
        }
        printf("\n");
    }

    return 0;
}