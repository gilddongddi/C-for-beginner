#include<stdio.h>

int main()
{
	int a, b;
	int result;

	printf("첫번째 숫자 입력하시오: ");
	scanf("%d", &a);
	printf("두번째 숫자 입력하시오: ");
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d=%d\n", a,  b, result);

	result = a - b;
	printf("%d - %d=%d\n", a, b, result);

	result = a * b;
	printf("%d * %d=%d\n", a,  b, result);

	result = a / b;
	printf("%d / %d=%d\n", a,  b, result);
}