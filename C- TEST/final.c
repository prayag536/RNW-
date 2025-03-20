#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    
    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /):\n ");

    printf("Enter an operation : ");
    if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) 
    {
        printf("Invalid input format.\n");
        return 1;
    }

    
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '/':
            if (num2 == 0) 
            {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Error: Unsupported operation '%c'.\n", operator);
            break;
    }

    return 0;
}

------------------------------------------------------------------

#include <stdio.h>


int sumarray(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int s, i;

    printf("Enter the number element: ");
    scanf("%d", &s);

    int arr[s];
    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = sumarray(arr, s);
    printf("Sum of array elements = %d\n", total);

    return 0;
}

--------------------------------------------------------------

#include <stdio.h>


int sumarray(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int s, i;

    printf("Enter the number element: ");
    scanf("%d", &s);

    int arr[s];
    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = sumarray(arr, s);
    printf("Sum of array elements = %d\n", total);

    return 0;
}

--------------------------------------------------------------

#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];  
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    ptr = arr;

   
    printf("Cubes of the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}

------------------------------------------------------------------

#include <stdio.h>

struct Book 
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    int n, i;

   
    printf("Enter number of books: ");
    scanf("%d", &n);

  
    struct Book books[n];

  
    for (i = 0; i < n; i++)
    {
        printf("\nEnter detail of Book %d\n", i + 1);
        printf("Title: ");
        getchar(); 
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    
    printf("\nList of Books:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title : %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Price : %.2f\n", books[i].price);
    }

    return 0;
}

------------------------------------------------------------------

#include <stdio.h>

int main() 
{
    int num = 11; 
    int rows = 5; 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


