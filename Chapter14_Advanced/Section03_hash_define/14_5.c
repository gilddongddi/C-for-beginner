// 기본 14-5 #define 문 사용 예

#include<stdio.h>

#define PI 3.1415926535
#define STR "원의 면적을 계산했습니다. \n"
#define END_MSG printf("프로그램이 종료되었습니다. \n\n")

void main()
{
	printf("반지름이 10인 원의 면적은 ==> %10.5f \n", 10 * 10 * PI);

	printf(STR);

	END_MSG;

	printf("\n\n");

	printf("원의 면적을 계산했습니다. \n");
	printf("원의 면적을 계싼했습니다. \n");
	printf("원의 면적을 계산했습니다. \n");

	printf("\n");

	printf("STR");
	printf("STR\n");
	printf(STR);
	printf(STR);

	printf("\n");
}