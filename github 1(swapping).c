#include<stdio.h>
void main()
{
	int x,y;
	printf("input the value of x & y: \n");
	scanf("%d%d",&x,&y);
	printf("before swapping \n the value of x and y is : %d %d", x, y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n after swapping the value of x and y is: %d %d", x, y);
	
}
