#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1;
	printf("Enter a Number : ");
	scanf("%d", &num1);

	if (num1 > 0 )
	{
		printf("%d is Positive", num1);
	}
	else if (num1 < 0)
	{
		printf("%d is Negative", num1);
	}
	else
	{
		printf("%d is Zero", num1);
	}
}
