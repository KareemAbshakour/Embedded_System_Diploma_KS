#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char alphabet;

	printf("Enter an alphabet: ");
	scanf("%c", &alphabet);

	switch(alphabet)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("%c is a Vowel", alphabet);
		break;

	default:
		printf("%c is a Consonant", alphabet);
		break;
	}
}
