// SECTION 01 �Լ��� ����

// 1 �Լ��� ����

// �⺻ 10-1 ���� Ŀ�Ǹ� �����ϴ� ������ �� - Ŀ�Ǹ� Ÿ�� 1ȸ�� ����
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	char s[3] = { 'A', 'B', 'C' };    // ������ �մ����� �����Ͽ� ����
//
//	for (i = 0; i < 3; i++)
//	{
//		int coffee;
//
//		printf(" %c �մ� � Ŀ�� �帱���? (1:����, 2:����, 3:��) ",s[i] );
//		scanf_s("%d", &coffee);
//
//		printf("\n# 1. �߰ſ� ���� �غ��Ѵ�. \n");
//		printf("# 2. �������� �غ��Ѵ�. \n");
//
//		switch (coffee)
//		{
//		case 1: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
//		case 2: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
//		case 3: printf("# 3. ��Ŀ�Ǹ� ź��. \n"); break;
//		default: printf("# 3. �ƹ��ų� ź��. \n"); break;
//		}
//
//		printf("# 4. ���� �״´�. \n");
//		printf("# 5. ��Ǭ���� ��� ���δ�.\n\n");
//
//		printf(" %c �մ�~ Ŀ�� ���� �ֽ��ϴ�. \n\n", s[i]);
//	}
//}



// Ŀ�����Ǳ�(�Լ�)�� ������. �⺻10-2

//#include<stdio.h>
//
//int coffee_machine(int button)				// Ŀ�� ���Ǳ� �Լ� ����
//{
//	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�. \n");
//	printf("# 2. �������� �غ��Ѵ�. \n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
//	case 2: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
//	case 3: printf("# 3. ��Ŀ�Ǹ� ź��. \n"); break;
//	default: printf("# 3. �ƹ��ų� ź��. \n"); break;
//	}
//
//	printf("# 4. ���� �״´�. \n");
//	printf("# 5. ��Ǭ���� ��� ���δ�.\n\n");
//
//	return 0;
//}
//
//int main()
//{
//	int coffee;
//	int ret;		//��ȯ�� ����. ?
//
//	printf("� Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��)");
//	scanf_s("%d", &coffee);
//
//	ret = coffee_machine(coffee);  // Ŀ�����Ǳ� �Լ� ȣ��
//
//	printf("�մ�~ Ŀ�� ���� �ֽ��ϴ�. \n\n");
//
//}



// ���� ���� �ֹ��� �޵��� ����. �⺻ 10-3
#include<stdio.h>

int coffee_machine(int button)				// Ŀ�� ���Ǳ� �Լ� ����
{
	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�. \n");
	printf("# 2. �������� �غ��Ѵ�. \n");

	switch (button)
	{
	case 1: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
	case 2: printf("# 3. ����Ŀ�Ǹ� ź��. \n"); break;
	case 3: printf("# 3. ��Ŀ�Ǹ� ź��. \n"); break;
	default: printf("# 3. �ƹ��ų� ź��. \n"); break;
	}

	printf("# 4. ���� �״´�. \n");
	printf("# 5. ��Ǭ���� ��� ���δ�.\n\n");

	return 0;
}

int main()
{
	int coffee;
	int ret, i;

	char s[3] = { 'A','B','C' };

	for (i = 0; i < 3; i++)
	{
		printf("%c �� � Ŀ�� �帱���? (1:����, 2:����, 3:��)", s[i]);
		scanf_s("%d", &coffee);

		ret = coffee_machine(coffee);
		printf("%c �� Ŀ�� ���� �ֽ��ϴ�. \n\n", s[i]);

	}
}
