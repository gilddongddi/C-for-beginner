// �⺻ 9-1 ���� ���� ��1

#include<stdio.h>

//int main()
//{
//	char stack[5];
//	int top = 0;
//
//	stack[top] = 'A';
//	printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
//	top++;
//
//	stack[top] = 'B';
//	printf(" %c �ڵ����� �ͳο� �� \n", stack[top]);
//	top++;
//
//	stack[top] = 'C';
//	printf(" %c �ڵ����� �ͳο� �� \n", stack[top]);
//	top++;
//
//	printf("\n");
//
//	top--;
//	printf(" %c �ڵ����� �ͳ��� �������� \n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c �ڵ����� �ͳ��� �������� \n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c �ڵ����� �ͳ��� �������� \n", stack[top]);
//	stack[top] = ' ';
//}


// ���� 9-2: 1�� �Է��ϸ� �ڵ����� ���� 2�� �Է��ϸ� �ڵ����� ������������
int main()
{
	char stack[5];
	int top = 0;

	char carName = 'A';
	int select;

	while (select != 3)
	{
		printf("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> ���� : ");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 5)
			{
				printf("�ͳ��� �� á���ϴ�.\n");
			}
			else
			{
				stack[top] = carName++;
				printf(" %c �ڵ����� �ͳο� �� \n", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0)
			{
				printf("�������� �ڵ����� �����ϴ�.\n");
			}
			else
			{
				top--;
				printf(" %c �ڵ����� �������� \n", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			printf("���� �ͳο� %d �밡 ���� \n", top);
			printf("���α׷��� �����մϴ�.\n");
			break;

		default:
			printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
		}
	}
}
