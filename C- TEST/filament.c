#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length,Palindrome = 1;

    printf("Enter any string:");
    scanf("%s", str);
   
    length = strlen(str);
    
    for (int i = 0; i <length/ 2; i++)
    {
        if (str[i] != str[length - i - 1])
        
        {
            Palindrome = 0;
        }
    }

    if (Palindrome)
    {
        printf("The given string is a palindrome\n");
    }
    
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}

--------------------------------------------------------------------

#include <stdio.h>
int main() {
    char str[500], ch;
    int count = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency:");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i]) ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

