// ���� 4���� �Է¹޾� ���� ���ϴ� ���α׷�

#include<stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("ù ��° ����� �� �Է�: ");
	scanf("%d", &a);

	printf("�� ��° ����� �� �Է�: ");
	scanf("%d", &b);

	printf("�� ��° ����� �� �Է�: ");
	scanf("%d", &c);

	printf("�� ��° ����� �� �Է�: ");
	scanf("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d", a, b, c, d, result);
}