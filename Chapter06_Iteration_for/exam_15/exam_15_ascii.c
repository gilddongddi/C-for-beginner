//exam15: �ƽ�Ű�ڵ�ǥ ��� ���α׷�, for, if��

#include<stdio.h>

int main()
{
	int i;

	for (i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			printf("------------------\n");
			printf("10���� 16���� ����\n");
			printf("------------------\n");
		}
		printf("%5d %5x %5c \n", i, i, i);
	}
}