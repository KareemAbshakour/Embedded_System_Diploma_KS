#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter a Character : ");
	scanf("%c", &c);
	printf("The ASCII character of %c is : %d",c,c);
}
