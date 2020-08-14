#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("enter a numbers from 1-5\n i'll give you the best food options");
	scanf("%d",&x);
	switch(x)
	{
		case 1: printf("PIZZA\n");
		        printf("Rs 239/-");break;
		case 2: printf("BURGER\n");
		        printf("Rs 129/-");break;
		case 3: printf("PASTA\n");
		        printf("Rs 179/-");break;
		case 4: printf("FRENCH FRIES\n");
		        printf("Rs 99/-");break;
		case 5: printf("SANDWICH\n");
		        printf("Rs 149/-");break;
		default: printf("you have entered an incorrect option");								        
	}
	
}
