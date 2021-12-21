//예제모음 11: 단순 if문을 활용한 간단한 계산기

#include<stdio.h>

int a, b;
char op;

int main()
{


	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요(+,-,*,/,%%) : ");
	scanf(" %c", &op);  //%c 앞에 공백을 넣지 않으니 연산자 입력 후 바로 종료되었다.

	printf("두 번째 수를 입력하세요 : ");
	scanf("%d", &b);

	if (op ==  '+')
	{
		printf("%d + %d = %d \n", a, b, a + b);
	}
	if (op == '-')
	{
		printf("%d - %d = %d \n", a, b, a - b);
	}
	if (op == '*')
	{
		printf("%d * %d = %d \n", a, b, a * b);
	}
	if (op == '/')
	{
		printf("%d / %d = %f \n", a, b, a / (float)b);
	}
	if (op == '%')
	{
		printf("%d %% %d = %d \n", a, b, a % b);
	}
}

// 두 개의 숫자와 연산자를 입력받은 후 결과가 프린트되지 않고 종료된다. 왜 그럴까? 
// 해결: if문에서 문자를 받을 때 "" 가 아닌 ''로 받아야 함