#include<stdio.h>
int main()
{
	int x, y;
	printf("enter value of x");
	scanf("%d", &x);
	printf("enter value of y");
	scanf("%d",&y);
	int z = x;
	x = y;
	y = z;
	printf("\nafter swapping: x = %d, y = %d",x, y);
	return 0;
}