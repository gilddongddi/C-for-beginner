// ex28 �Լ��� �̿��� ��ҹ��� ��ȯ ���α׷�

#include<stdio.h>

char ch(aa)
{
	char a = 'a';
	char b = 'A';
	int diff = 'a' - 'A';
	
	if (('a' <= aa) && (aa >= 'z'))
		aa = aa - diff;
	else if (('A' <= aa) && (aa >= 'Z'))
		aa = aa + diff;
	else
		aa == aa;
}

void main()
{
	char s[100];
	int i;
	char t;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(s);

	printf("������ �ҹ��� Ȥ�� �빮�ڸ� �Է��ϼ��� : ");
	scanf("%c", &t);

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == t)
		{
			s[i] = ch(t);
		}
		
	}

	printf("����� ���ڿ� ==> %s\n", s);
}