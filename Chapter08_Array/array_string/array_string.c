// SECTION 02 �迭�� ���ڿ�
// ������ �迭�� ������ �迭

// �⺻ 8-7 

#include<stdio.h>

//int main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//
//	printf("���ڿ� �迭 ss==> %s\n", ss);
//}


// ���� 8-8

int main()
{
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		tt[i] = ss[3 - i];
	}
	tt[4] = '\0';

	printf("�Ųٷ� ����� ��� ==> %s \n", tt);
}
