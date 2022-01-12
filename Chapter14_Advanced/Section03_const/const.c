// const 예약어 : const로 변수를 선언하면 해당 변수는 변수의 역할을 하는 것이 아니라 상수의 역할을 한다.


#include<stdio.h>

#define c 300

int main()
{
	const int a = 100;

	int b;

	b = a + 200;

	//a = 200;		// a 는 상수 100 으로 고정되어 있으므로 그 외의 값을 대입하면 오류발생.


	printf("%d %d \n\n", a, b);

	printf("%d %d %d \n\n", c, c+a, c+b);
}