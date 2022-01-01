// 예제모음 13 : switch ~ case 문을 활용한 간단한 계산기

#include<stdio.h>

int a, b;
char op;

int main()
{
	printf("첫 번째 수를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("연산자를 입력하세요[+,-,*,/,%] : ");
	scanf_s(" %c", &op);

	printf("두 번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %.2f \n", a, b, a / (float)b);
		break;
	case '%':
		printf("%d %% %d = %d \n", a, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다. \n");
	}
}