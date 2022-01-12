// 기본 14-6 static 사용 예

#include<stdio.h>

void myfunc();				// myfunc() 함수의 프로토타입 선언.

void main()
{
	myfunc();				// myfunc() 함수 호출 => 100출력
	myfunc();				// myfunc() 함수 호출 => 200출력
}

void myfunc()
{
	static int a = 0;		// a 를 static 예약어를 사용해 초기화 했으므로, myfunc() 호출 뒤 재호출될 때 a 가 0으로 다시 초기화되지 않고 값을 유지한채 호출

	a = a + 100;
	printf("a의 값 ==> %d\n", a);
}