#include <stdio.h>

int add(int x, int y)
{
   return x+y;
}

int sub(int x, int y)
{
   return x-y;
}

int multi(int x, int y)
{
   return x*y;
}

int divison(int x, int y)
{
   return x/y;
}

int mod(int x, int y)
{
   return x%y;
}

int calculation()
 {  int choice;
    int firstnumber;
    int secondnumber;
    int answer;
    printf("press 1 for + \npress 2 for -\npress 3 for *\npress 4 for /\npress 5 for %\npress 0 for the exit\n");
    
    printf("enter your choice:");
    scanf("%d", &choice);
    if (choice==0)
    {
      return 0;
    }
    
    printf("enter the first number:");
    scanf("%d",&firstnumber);
 
    printf("enter the second number:");
    scanf( "%d",&secondnumber);
 
    if (choice==0)
    {
      return 0;
    }
 
     else if (choice==1)
     {
      answer = add (firstnumber, secondnumber);
      printf("addition of %d & %d is %d\n\n",firstnumber, secondnumber, answer);
     }
 
     else if (choice==2)
     {
      answer = sub (firstnumber, secondnumber);
      printf("substration of %d & %d is %d\n\n",firstnumber, secondnumber, answer);
     }
   
     else if (choice==3)
     {
      answer = multi(firstnumber, secondnumber);
      printf("multiplication of %d & %d is %d\n\n",firstnumber, secondnumber, answer);
     }
   
     else if (choice==4)
     {
      answer = divison(firstnumber, secondnumber);
      printf("divison of %d & %d is %d\n\n",firstnumber, secondnumber, answer);
     }
   
     else if (choice==5)
     {
      answer = mod(firstnumber, secondnumber);
      printf("module of %d & %d is %d\n\n",firstnumber, 
      secondnumber, answer);
     }
    
    else  
     {
     
     }
 }

int main()
{
    calculation();
    return 0;
}