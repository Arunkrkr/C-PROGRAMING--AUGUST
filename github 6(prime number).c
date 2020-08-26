#include<stdio.h>
#include<conio.h>
int n;
int prime(int num, int i)
{
if(num < 2)
{
printf("\nEnter numbers greater than 1\n");
exit(0);
}
if (i == 1)
{
return 1;
}
else
{
if (num % i == 0)
{
return 0;
}
else
{
return prime(n,i–1);
}
}
}
void main()
{
int counter;
printf("Enter a number: ");
scanf("%d", &n);
counter = prime(n, n / 2);
if (counter == 1)
{
printf("\n%d is a prime number\n", n);
}
else
{
printf("\n%d is not a prime number\n", n);
}
}
