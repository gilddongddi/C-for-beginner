// Section 03 논리 연산자

#include<stdio.h>


// 기본4-6 논리 연산자 사용 예1

int main(){

// 기본4-6 논리 연산자 사용 예1
	int a = 99;

	printf(" AND 연산 : %d \n", (a >= 100) && (a <= 200));
	printf(" OR 연산 : %d \n", (a >= 100) || (a <= 200));
	printf(" NOT 연산 : %d \n", !(a == 100));
	printf("\n\n");

// 응용 4-7 논리 연산자 사용 예2

	a = 100;
	int b = -200;

	printf(" 상수의 AND 연산: %d \n", a && b);
	printf(" 상수의 OR 연산: %d \n", a || b);
	printf(" 상수의 NOT 연산: %d \n", !a);  // '100이 아니다', 즉 참(100)이 아니다를 의미하므로 거짓(0)이 출력








}