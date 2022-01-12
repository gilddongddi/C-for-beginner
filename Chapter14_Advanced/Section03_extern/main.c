// 기본 14-7 extern 예약어 사용 예1

#include<stdio.h>

void func();			// func() 함수의 프로토타입 선언

int a;					// 전역변수 a 선언

void main()
{
	a = 100;			// 전역번수에 값 대입

	func();				// 함수 호출
}