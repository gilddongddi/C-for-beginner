//예제모음12 : 중복 if문을 활용한 간단한 계산기

#include<stdio.h>

int a, b;
char op;

int main()
{
	printf("첫 번째 수 입력 : ");
	scanf_s("%d", &a);

	printf("연산자 입력(+,-,*,/,%%) : ");
	scanf_s(" %c", &op);

	printf("두 번째 수 입력 : ");
	scanf_s("%d", &b);

	if (op == '+')
		printf("%d + %d = %d \n", a, b, a + b);
	else if (op == '-')
		printf("%d - %d = %d \n", a, b, a - b);
	else if (op == '*')
		printf("%d * %d = %d \n", a, b, a * b);
	else if (op == '/')
		printf("%d / %d = %f \n", a, b, a / (float)b);
	else if (op == '%')
		printf("%d %% %d = %d \n", a, b, a % b);
	else
		printf("연산자를 잘못 입력했습니다. \n");

}

// 문자는 ''로 감싸야 하고, 문자열은 ""로 감싸야 한다. 문자를 ""로 감싸니 연산자를 인식하지 못해
// if문이 실행되지 않고 바로 else로 넘어감