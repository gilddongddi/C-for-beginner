// �������� 13 : switch ~ case ���� Ȱ���� ������ ����

#include<stdio.h>

int a, b;
char op;

int main()
{
	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("�����ڸ� �Է��ϼ���[+,-,*,/,%] : ");
	scanf_s(" %c", &op);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %.2f \n", a, b, a / (float)b);
		break;
	case '%':
		printf("%d %% %d = %d \n", a, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
	}
}