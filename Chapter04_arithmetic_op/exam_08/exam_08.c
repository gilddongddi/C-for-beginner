//***입력된 두 실수의 산술 연산***
//실수를 입력받아 두 수의 다양한 연산을 출력하는 프로그램이다.
//힌트_ 나머지를 구할 때는 강제 형 변환을 사용한다.

#include<stdio.h>

int main()
{
	float a, b;
	float result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &b);

	result = a + b;
	printf("\n%5.2f + %5.2f = %5.2f \n", a, b, result);

	result = a - b;
	printf("%5.2f - %5.2f = %5.2f \n", a, b, result);

	result = a * b;
	printf("%5.2f * %5.2f = %5.2f \n", a, b, result);

	result = a / b;
	printf("%5.2f / %5.2f = %5.2f \n", a, b, result);

	result=(int)a % (int)b;
	printf("%d %% %d = %d \n", (int)a, (int)b, result);

}



