#include <stdio.h>

int main()
{	int b ;
	int h ;
	printf("breath of the triangle:");
	scanf("%d", &b);
    printf("height of the triangle:");
	scanf("%d", &h);
	int c = b * h ;
	float a = 0.5*c;
	printf("area of triangle is %f", a );
	return 0;
}
