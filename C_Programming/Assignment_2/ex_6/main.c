#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i,n,sum;

	printf("Enter an Integer : ");
	scanf("%d", &n);
	while(!(n >= 0))
	{
		printf("Enter an Integer : ");
		scanf("%d", &n);
	}
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
}
