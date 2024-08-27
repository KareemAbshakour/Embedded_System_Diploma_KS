#include<stdio.h>

int main()
{
	int x;
	printf("C Programming\n");
	printf("/************************/\n");
	printf("Enter an Integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &x);
	printf("You Entered: %d", x);
}
