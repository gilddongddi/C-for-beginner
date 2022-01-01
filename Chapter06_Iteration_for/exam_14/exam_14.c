//응용 6-18, 계산기, 무한루프

#include<stdio.h>

int main()
{
	//int a, b;

	//for (;;)
	//{
	//	printf("더할 수 입력(멈추려면 Ctrl+C) : ");
	//	scanf_s("%d %d", &a, &b);

	//	printf("%d + %d = %d \n", a, b, a + b);
	//}

	//예제모음14, 구구단 출력 프로그램, 중첩for문

	int i, k;

	for (i = 2; i < 10; i++)
	{
		printf("제%2d단  ", i);
	}
	printf("\n");

	for (i = 1; i < 10; i++)
	{
		for (k = 2; k < 10; k++)
		{
			printf("%dx%d=%2d  ", k, i, k * i);
		}
		printf("\n");
	}
}