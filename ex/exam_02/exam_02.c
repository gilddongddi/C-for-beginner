// if������ ����, ����, ����, ������ �� �ϳ��� �����Ͽ� ����ϴ� ���α׷�

#include<stdio.h>

int main()
{
	int a, b;
	int c;
	int result;

	printf("ù ��° ����� �� �Է�: ");
	scanf("%d", &a);

	printf("<1>���� <2>���� <3>���� <4>������ : ");
	scanf("%d", &c);

	printf("�� ��° ����� �� �Է�: ");
	scanf("%d", &b);

	
	if (c == 1)
	{
		result = a + b;
		printf("%d + %d = %d", a, b, result);
	}
	if (c == 2)
	{
		result = a - b;
		printf("%d - %d = %d", a, b, result);
	}
	if (c == 3)
	{
		result = a * b;
		printf("%d * %d = %d", a, b, result);
	}
	if (c == 4)
	{
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}
	
}
