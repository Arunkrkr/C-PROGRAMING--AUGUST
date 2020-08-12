#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("enter the student's marks in integer value");
	scanf("%d",&x);
	if (x>=85 && x<=100)
	{
		printf("GRADE A");
	}
		if (x>=70 && x<=84)
	{
		printf("GRADE B");
	}
		if (x>=55 && x<=69)
	{
		printf("GRADE C");
	}
		if (x>=40 && x<=54)
	{
		printf("GRADE D");
	}
		if (x<40)
	{
		printf("GRADE F");
	}
	
}
