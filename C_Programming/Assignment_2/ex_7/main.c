#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i, n;
	int factorial = 1;

	printf("Enter an Integer : ");
	scanf("%d", &n);
	while(!(n >= 0))
	{
		printf("ERROR!! Enter an Integer : ");
		scanf("%d", &n);
	}
	if(n == 0)
	{
		printf("Factorial = 1");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			factorial *= i;
		}

		printf("Factorial = %d", factorial);
	}
}
