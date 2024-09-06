#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter Character : ");
	scanf("%c", &c);

	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))? printf("%c is Alphabet",c):printf("%c is not Alphabet",c);

}
