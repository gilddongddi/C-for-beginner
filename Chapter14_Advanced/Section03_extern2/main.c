// ���� 14-8 extern ����� ��� ��2

#include<stdio.h>

void exchange();				// exchange() �Լ��� ������ Ÿ�� ����

int a, b;						// �������� a, b ����

int main()
{
	printf("a�� ���� �Է� : ");
	scanf("%d", &a);			// �������� a�� ���� �Է�

	printf("b�� ���� �Է� : ");
	scanf("%d", &b);			// �������� a�� ���� �Է�

	exchange();					// �Լ� ȣ��

	printf("\n�ٲ� �� a�� %d, b�� %d \n", a, b);
}