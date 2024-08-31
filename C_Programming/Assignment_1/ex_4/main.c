#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1,num2;
	printf("Enter two float numbers : \n ");
	scanf("%f %f", &num1 , &num2);
	printf("Sum = %f", num1+num2);
}
