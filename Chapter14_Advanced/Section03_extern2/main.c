// 응용 14-8 extern 예약어 사용 예2

#include<stdio.h>

void exchange();				// exchange() 함수의 프로토 타입 선언

int a, b;						// 전역변수 a, b 선언

int main()
{
	printf("a의 값을 입력 : ");
	scanf("%d", &a);			// 전역변수 a에 값을 입력

	printf("b의 값을 입력 : ");
	scanf("%d", &b);			// 전역변수 a에 값을 입력

	exchange();					// 함수 호출

	printf("\n바뀐 값 a는 %d, b는 %d \n", a, b);
}