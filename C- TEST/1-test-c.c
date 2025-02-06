/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     flot c;
    printf("enter temperature in celsius:-");
    scanf("%f",&c);
    flot f=(1.8*c)+32;
    printf("%.1f celsius temperature in fahrenheit is:-%.1f",c,f);
    return 0;
}

----------------------------------------------------------------------------------


#include <stdio.h>

int main()
{
    float bs;
    int hra = 10;
    int da = 5;
    int ta = 8;
    
    float ab;
    printf("input a base salary:-");
    scanf("%f", &bs);
    float s =bs*0.01*hra;
    float p =bs*0.01*da;
    float j =bs*0.01*ta;
     
    ab=bs+s+p+j;
    printf("gross salary:- %.2f", ab); 

    return 0;
}

----------------------------------------------------------------------------------



#include <stdio.h>

int main()
{
  float g;
  float j;
  float p;
   
  printf("first angle:");
  scanf("%f", &g);
  
  printf("second angle:");
  scanf("%f", &j);
  
  float r= g+j;
        p=180-r;
        
  printf("third angle: %.2f", p);
  
  return 0;
}



----------------------------------------------------------------------------------














