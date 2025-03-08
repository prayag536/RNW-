#include <stdio.h>

int main()
{
    int i,j;
    printf("Enter array size:");
    scanf("%d",&j);
    int d[j];
    int a[j];
    int c[j];
    
    printf("Enter data for array[a]: ");
    for(int i=0; i<j;i++)
    {
        printf("a [%d]=", i);
        scanf("%d",&a[i]);
    }
    printf("Enter data for array[b]: ");
    for(int i=0; i<j; i++)
    {
        printf("a[%d]=", i);
        scanf("%d",&c[i]);
    }
    printf("Array [c] is:");
    for(int i=0; i<j; i++)
    {
        d[i]=a[i]+c[i];
        printf(" %d ,",d[i]);
    }
    return 0;
}