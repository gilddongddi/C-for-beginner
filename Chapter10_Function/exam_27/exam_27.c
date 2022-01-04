// ex27 함수를 이용한 구구단 프로그램

#include<stdio.h>

int gugu(int a)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		printf(" %d x %d = %2d\n", a, i + 1, a * (i + 1));
	}
	printf("\n");
}

int main()
{
	int dan = 0;

	while (dan != 'q')
	{
		

		printf("출력하고 싶은 단은?(끝냄:0) : ");
		scanf_s("%d", &dan);

		if (dan == 0)
			break;
		else
			gugu(dan);

	}

}