// �⺻ 14-7 extern ����� ��� ��1

#include<stdio.h>

//extern int a;			// ���� a�� �ܺ� ������ ����ϰڴٴ� ����
int a;					// �׳� ���⼭ ���� a�� �����ص� ����� ����. extern�� ���ӻ��� ���� �� ���ذ� �ȵȴ�.

void func()
{
	printf("extern int a�� ==> %d\n", a);		// ���� a�� �� 100�� ���
}