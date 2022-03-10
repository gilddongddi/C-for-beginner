// 숫자 4개를 입력받아 합을 구하는 프로그램

#include<stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("첫 번째 계산할 값 입력: ");
	scanf("%d", &a);

	printf("두 번째 계산할 값 입력: ");
	scanf("%d", &b);

	printf("세 번째 계산할 값 입력: ");
	scanf("%d", &c);

	printf("네 번째 계산할 값 입력: ");
	scanf("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d", a, b, c, d, result);
}