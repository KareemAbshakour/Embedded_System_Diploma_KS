#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1,num2;
	printf("Enter two Integers : \n ");
	scanf("%d %d", &num1 , &num2);
	printf("Sum = %d", num1+num2);
}
