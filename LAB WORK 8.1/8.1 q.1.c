#include <stdio.h>

int main()
{
    int m,cnt=0;
    printf("Enter array size:");
    scanf("%d",&m);
    int g[m];
    printf("Enter data for array:");
    for(int i= 0; i<m; i++)
    {
        scanf("%d",&g[i]);
        cnt++;
    }
    printf("The size of array is : %d ",cnt);
    
    return 0;
}
