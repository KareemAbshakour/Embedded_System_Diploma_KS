#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num;

	printf("Enter Integer you want to check: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
		printf("%d is Even \n", num);
	}
	else
	{
		printf("%d is Odd \n", num);
	}
}
