#include <stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int a,b,temp;
	printf("Enter The value of a : ");
	scanf("%d", &a);
	printf("Enter The value of b : ");
	scanf("%d", &b);

	temp = a;
	a = b;
	b=temp;

	printf("The Value of a After Swapping : %d\n",a);
	printf("The Value of b After Swapping : %d",b);


}
