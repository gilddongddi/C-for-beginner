//�⺻ 7-3: ���� ������ ���� while�� - for( ; ; ) == while(1)

#include<stdio.h>

int main()
{
	int a, b;

	//	for (; ; )
	while(1)
	{
		printf("���� �� �� �Է�(���߷��� Ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);

	}
}