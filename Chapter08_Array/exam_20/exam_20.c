// �������� 20 ���ڿ� �迭�� �̿��ؼ� �Էµ� ���ڿ��� �ݴ� ������ ����ϴ� ���α׷�

#include<stdio.h>

//int main()
//{
//
//	char s[100];
//	int i;
//
//	char t[100];
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(s);
//
//	printf("\n");
//	//printf("%s\n", s);
//
//	for (i = 0; i < 100; i++)
//	{
//		
//		t[i] = s[sizeof(s) -1- i];
//		
//	}
//	t[sizeof(t)] = '\0';
//	printf("������ �Ųٷ� ��� : %s\n", t);
//}

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("���ڿ��� �Է��ϼ��� : ");
	//scanf("%s", ss);   // scanf_s�� ���ڿ� ����� �ȵ�, scanf�� ������ ������ �ȵ�. 
	gets(ss);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		//tt[i] = ss[count -1-i];
		tt[i] = ss[count - (1 + i)];
	}
	tt[count] = '\0';

	printf("������ �Ųٷ� ��� ==> %s\n", tt);
}

