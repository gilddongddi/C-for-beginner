// ex25 입력한 두 값을 포인터를 활용하여 교환하는 프로그램

// 임시 변수 tmp를 이용, *p1의 값을 tmp 에 넣고, *p2 의 값을 *p1에 넣은 다음 tmp의 값을 *p2에 대입

#include<stdio.h>

int main()
{
	int a, b, tmp;
	int* p1, * p2;   // 이렇게 선언하거나 아니면 각각 int *p1; int *p2 로 선언해야 함. int *p1,p2 와 같이 선언하면 p2는 일반 정수형 변수로 선언됨.

	printf("a 값 입력 :");
	scanf_s("%d", &a);

	printf("b 값 입력 :");
	scanf_s("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 a의 값은 %d, b의 값은 %d \n", a, b);
}