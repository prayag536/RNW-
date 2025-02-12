#include <stdio.h>

int main()
{
    int p;
    char grade;

    printf("input a score:");
    scanf("%d",&p);
    
    grade =(p>=1&&p<=35)? 'F':
    (p>=36&&p<=50)? 'D':
    (p>=51&&p<=80)? 'C':
    (p>=81&&p<=90)? 'B':
    (p>=91&&p<=100)?'A':printf("invalid input.");
    
    (p>=1&&p<=100)?printf(" grade %c. ",grade):printf("invalid input.");
 
 



  switch(grade)
    {
        case 'F' :
        printf("Sorry,you are Failed");
        break; 
        case 'D' :
        printf("You passed,but you could do better");
        break;
        case 'C' :
        printf("Good job");
        break;
        case 'B' :
        printf("well done");
        break;
        case 'A' :
        printf("Excellent work!");
        break;
        default:
        printf("invalid Input.");
        break;
        
    }



  if (grade== 'A' ||grade== 'B' ||grade== 'C'||grade== 'D')
    {
        printf(" Congratulations! You are eligible for next level");
    }
    
    else if (grade== 'F')
    {
        printf("Please try again next time");
    }
    
    else 
    {
        printf("invalid Input.");
    }
    
    return 0;
}



