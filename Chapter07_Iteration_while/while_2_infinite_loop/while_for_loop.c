//기본 7-3: 무한 루프를 위한 while문 - for( ; ; ) == while(1)

#include<stdio.h>

int main()
{
	int a, b;

	//	for (; ; )
	while(1)
	{
		printf("더할 두 수 입력(멈추려면 Ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);

	}
}