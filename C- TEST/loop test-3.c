#include <stdio.h>

int main()
{
    char  ch='a';
    
    do
    {
        printf ("%C,", ch);
        ch= ch+4;
    }
    
    while (ch<='z');

    return 0;
}

----------------------------------------------------------------------------


#include <stdio.h>

int main()

{
        int num ,cnt=1; 
        
        printf("input a number to count digit in the intigers:");
        
        scanf("%d",&num);
        
        while (num>=10)
        {
            num = num / 10 ; 
           cnt++;   
        } 
        printf("There are %d digit in this number",cnt);
        
        
    return 0;
}

---------------------------------------------------------------------------

#include <stdio.h>

int main() 
{
	
        int num , sum , firstdigit , lastdigit;
        
        printf("input any number:");
        
        scanf("%d",&num);
        
        lastdigit = num %10 ; 
        
        while (num>=10)
        {
            num = num / 10 ;
            
        } 
        
        firstdigit=num;
        
        sum = firstdigit+lastdigit; 
        
        printf("%d",sum);
        
        
    return 0;
}





