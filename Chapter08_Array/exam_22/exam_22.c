// �������� 22: ������ ����� 2���� �迭�� ������ �� ���

// 1x1 ���� 9x9 ���� �����ؾ� �ϹǷ� 9x9 �迭�� ����

#include<stdio.h>

int main()
{
	int gugu[9][9];
	int i, k;

	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
			printf(" %2dx%2d =%2d ", k, i, k * i);
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
			printf(" %2dx%2d =%2d ", i, k, k * i);
		printf("\n");
	}

}