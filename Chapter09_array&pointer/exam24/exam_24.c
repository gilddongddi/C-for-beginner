// ex24 �����͸� �̿��� ���ڿ��� �ݴ� ������ ���

#include<stdio.h>
#include<string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("���ڿ��� �Է��ϼ��� :");
	gets(ss);

	p = ss;  // �迭 ss�� �ּҸ� ������ ���� p�� ����

	//count = strlen(ss);

	//printf("������ �Ųٷ� ��� ==> ");
	//for (i = 0; i < strlen(ss); i++)
	//{
	//	printf("%c", *(p + strlen(ss) - 1 - i));
	//}
	//printf("\n");


	count = strlen(ss);					// count ������ �� ��� ��. strlen()�� ���� �Է��ؼ� ������ ���� ����

	printf("������ �Ųٷ� ��� ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - 1 - i));  // ��ü ���ڿ� ���̿��� null�� 1�� ���� i=0 ���� ���� �ε������� �Ųٷ� ��µǰ� ��. -(i+1) �ε� ǥ��.
	}
	printf("\n");
}