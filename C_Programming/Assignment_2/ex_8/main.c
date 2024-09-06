#include<stdio.h>

int main()
{
	/* two lines to solve scanf problem */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1,num2;
	char operator;

	printf("Enter Operator '+' , '-' , '*' , '/' " );
	scanf("%c",&operator);
	printf("Enter Two Operands : ");
	scanf("%f",&num1);
	scanf("%f",&num2);

	switch(operator)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",num1,num2 , num1+num2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",num1,num2 , num1-num2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",num1,num2 , num1*num2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",num1,num2 , num1/num2);
		break;
	}
}
