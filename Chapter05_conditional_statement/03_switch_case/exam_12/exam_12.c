//��������12 : �ߺ� if���� Ȱ���� ������ ����

#include<stdio.h>

int a, b;
char op;

int main()
{
	printf("ù ��° �� �Է� : ");
	scanf_s("%d", &a);

	printf("������ �Է�(+,-,*,/,%%) : ");
	scanf_s(" %c", &op);

	printf("�� ��° �� �Է� : ");
	scanf_s("%d", &b);

	if (op == '+')
		printf("%d + %d = %d \n", a, b, a + b);
	else if (op == '-')
		printf("%d - %d = %d \n", a, b, a - b);
	else if (op == '*')
		printf("%d * %d = %d \n", a, b, a * b);
	else if (op == '/')
		printf("%d / %d = %f \n", a, b, a / (float)b);
	else if (op == '%')
		printf("%d %% %d = %d \n", a, b, a % b);
	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");

}

// ���ڴ� ''�� ���ξ� �ϰ�, ���ڿ��� ""�� ���ξ� �Ѵ�. ���ڸ� ""�� ���δ� �����ڸ� �ν����� ����
// if���� ������� �ʰ� �ٷ� else�� �Ѿ