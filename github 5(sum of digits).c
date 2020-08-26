# include<stdio.h>
#include<conio.h>
int sod(int i) //sod = sum of digits
{
return i == 0 ? 0 : i%10 + sod(i/10) ;
}

void main()
{
int i;
printf("\nEnter a number : ");
scanf("%d",&i);
printf("\nSum of digits of %d is %d\n", i,sod(i));
}
