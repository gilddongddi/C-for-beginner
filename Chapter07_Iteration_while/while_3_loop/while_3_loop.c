//���� 7-4: ���� ������ Ȱ���� ����

#include<stdio.h>

int main()
{
	int a, b;
	char ch;

	while (1)
	{
		printf("����� �� ���� �Է�(���߷��� Ctrl+C) : ");
		scanf("%d %d", &a, &b);

		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);

		switch (ch)
		{
		case '+':
			printf("%d + %d = %d �Դϴ�.\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d �Դϴ�.\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d �Դϴ�.\n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %.2f �Դϴ�.\n", a, b, a / (float)b);
			break;
		case '%':
			printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
		default:
			printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
		}
	}
}