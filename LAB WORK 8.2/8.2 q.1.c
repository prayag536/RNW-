#include <stdio.h>

int main()
{
    int row ,column,cnt=0;
    float sum=0 ;
    printf("Enter the array's row size:-");
    scanf("%d",&row);
    printf("Enter the array's column size:-");
    scanf("%d",&column);
    int a [row][column];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("please enter value for a[%d][%d]:- ",i,j);
            scanf("%d",&a[i][j]);
            sum += a[i][j];
            cnt++;
        }
    }
    float avg = sum / cnt;
    printf("The average of an array is :- %.2f\n",avg);

    return 0;
}