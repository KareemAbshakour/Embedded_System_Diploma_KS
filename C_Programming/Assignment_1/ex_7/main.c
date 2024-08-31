#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int a,b;
	printf("Enter The value of a : ");
	scanf("%d", &a);
	printf("Enter The value of b : ");
	scanf("%d", &b);

	a = a+b;
	b = a-b;
	a = a-b;

	printf("The Value of a After Swapping : %d\n",a);
	printf("The Value of b After Swapping : %d",b);


}
