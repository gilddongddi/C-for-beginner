//���� 6-18, ����, ���ѷ���

#include<stdio.h>

int main()
{
	//int a, b;

	//for (;;)
	//{
	//	printf("���� �� �Է�(���߷��� Ctrl+C) : ");
	//	scanf_s("%d %d", &a, &b);

	//	printf("%d + %d = %d \n", a, b, a + b);
	//}

	//��������14, ������ ��� ���α׷�, ��øfor��

	int i, k;

	for (i = 2; i < 10; i++)
	{
		printf("��%2d��  ", i);
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