// exam19: �Էµ� ���ڸ�ŭ ��ǥ ���

//���� ���� �Է��� ���ڸ�ŭ�� �� ����� ����ϴ� ���α׷��̴�.���� ��� 5914�� �Է��ϸ� �� �ٿ� ����
//5��, 9��, 1 ��, 4�� ����Ѵ�.

#include<stdio.h>

int main()
{
	char str[100];
	char ch;

	int i, k;
	int star;

	printf("���ڸ� ���� �� �Է� : ");
	scanf("%s", str);

	i = 0;
	ch = str[i];
	while (ch != '\0') {
		star = (int)ch - 48;

		for (k = 0; k < star; k++)
			printf("*");

		printf("\n");
		i = i + 1;
		ch = str[i];
	}
}