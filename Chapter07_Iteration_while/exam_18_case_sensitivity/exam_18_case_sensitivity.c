//exam18: �Էµ� ���ڿ��� ���� ����

// ���� ���� - �Է��� ���ڿ��� �빮�ڿ� �ҹ���.���ڰ� ���� �� �� �ԷµǾ����� ���� ���α׷��̴�.
// �� �ܴ� ���� �Ѵ�.

#include<stdio.h>

int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("���ڿ��� �Է�(100�� �̳�) : ");
	scanf("%s", str);

	i = 0;
	do {
		ch = str[i];

		if (ch >= 'A' && ch <= 'Z')
			upper_cnt++;
		if (ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if (ch >= '0' && ch <= '9')
			digit_cnt++;

		i++;
	} while (ch != '\0');

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��\n", upper_cnt, lower_cnt, digit_cnt);



}