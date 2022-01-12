// 기본 14-7 extern 예약어 사용 예1

#include<stdio.h>

//extern int a;			// 변수 a를 외부 변수로 사용하겠다는 선언
int a;					// 그냥 여기서 변수 a를 선언해도 결과가 같음. extern의 쓰임새가 아직 잘 이해가 안된다.

void func()
{
	printf("extern int a값 ==> %d\n", a);		// 변수 a의 값 100이 출력
}