//�⺻ 9-6 �Ϲ� ������ ������ ������ ����

#include<stdio.h>

//int main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch�� ������ �ִ� ��: ch ==> %c \n", ch);
//	printf("ch�� �ּ�(address): &ch ==> %d \n", &ch);
//	printf("p�� ������ �ִ� �� : p ==> %d \n", p);
//	printf("p�� ����Ű�� ���� ������ : *p ==> %c \n", *p);
//
//	printf("\n");
//
//}

	//�������� ���� �����ϱ�
int main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;
	*q = 'Z';

	printf("ch�� ������ �ִ� ��: ch ==> %c \n\n", ch);

	//self study
	int a;
	int* r;
	int* s;

	a = 100;
	r = &a;
	s = r;

	*s = 200;

	printf("a�� ������ �ִ� ��: a ==> %d \n\n", a);
}