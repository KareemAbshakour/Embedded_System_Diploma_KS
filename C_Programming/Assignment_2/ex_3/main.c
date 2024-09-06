#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1 , num2 , num3 , largestNum;
	printf("Enter Three Numbers: ");
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);

	largestNum = num1;

	if(num2 > largestNum)
	{
		largestNum = num2;
	}
	else if(num3>largestNum)
	{
		largestNum = num3;
	}

	printf("Largest Number : %.2f", largestNum);

}
