// SECTION 01 ǥ�� ����� �Լ�

//�⺻ 11-1, ����ȭ�� ����� �Լ� ��� ��

//#include<stdio.h>
//
//void main()
//{
//	int a;
//	float b;
//	char ch;
//	char s[20];
//
//	printf("������ �Է� : ");
//	scanf_s("%d", &a);
//	printf("�Ǽ��� �Է� : ");
//	scanf_s("%f", &b);
//	printf("���ڸ� �Է� : ");
//	scanf_s(" %c", &ch, 1);				// scanf�� �޸� scanf_s�� ���ڳ� ���ڿ� �Է��� ���� �Է¹��� ���� ������ �Ű������� 3�� �־�� ��. ���ڿ��� null���� ��� -1�ؾ� ��
//	printf("���ڿ��� �Է� : ");
//	scanf_s("%s", s, 20);
//
//	printf("\n������ 10���� ==> %d\n", a);
//	printf("������ 16���� ==> %X\n", a);
//	printf("������ 8���� ==> %o\n", a);
//	printf("�Ǽ�  ==> %10.3f\n", b);
//	printf("�Ǽ�(���п�)==> %e\n", b);
//	printf("����  ==> %c\n", ch);
//	printf("���ڿ� ==> %s\n", s);
//}



// �⺻ 11-2 ���ڿ� ����� �Լ� ��� ��
//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//
//	printf("���ڿ��� �Է� : ");
//	gets(s);
//
//	puts(s);
//}


// �⺻ 11-3 ���� ����� �Լ� ��� ��1
//#include<stdio.h>
//
//void main()
//{
//	char ch;
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//}



// ���� 11-4 ���� ����� �Լ� ��� �� 2 : getch()

//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	char password[5] = "1234";		// {5,6,7,8,\0}  �������� null�� �����ؼ� 5��  vs ������ �迭�� null�� ����
//	char input[5];
//	int i;
//
//	//printf("%d\n", strcmp(password, input));
//
//	printf("��й�ȣ�� %s :\n", password);
//
//	printf("��й�ȣ 4 ���ڸ� �Է��ϼ��� :");
//	for (i = 0; i < 4; i++)
//		//input[i] = getche();
//		input[i] = getch();			// getch()�Լ��� ���ڸ� �ѱ��ھ� ������ �ʰ� �Է¹���  vs getche()�� �ѱ��ھ� �����ָ鼭 �Է¹���
//
//	printf("\n�Է��� ��й�ȣ�� %s \n", input);  // �� �ȴ�. �Է��� ��й�ȣ�� �ڲ� ��������ڵ��� ����. �ذ��� ����� �����ٵ�?
//
//	if (strcmp(password, input) == 0) 
//	{
//		printf("\n��й�ȣ ��ġ�մϴ�.\n");
//	}
//	else
//	{
//		printf("\n�Է��� ��й�ȣ ");
//
//		for (i = 0; i < 4; i++)
//			putch(input[i]);
//		printf("�� Ʋ�Ƚ��ϴ�.\n");
//	}
//}


// �⺻ 11-5 ���� ����� �Լ� ��� �� 3 , getche(); ==> ���� �� ���ھ� �Է¹ް� ����Ϳ� �����ش�.

//#include<stdio.h>
//
//void main()
//{
//	char ch;
//
//	ch = getche();
//	ch = getche();
//	ch = getche();
//
//}


// �⺻ 11-6 ���� ����� �Լ� ��� �� 4, getchar();
#include<stdio.h>

void main()
{
	char ch;

	printf("���ڿ��� �Է��ϼ��� : ");
	ch = getchar();			// ���ڸ� �Է¹޾� ����(�ӽ������)�� ���� �� ù ���ڸ� ch ������ ����
	putchar(ch);			// ch ������ ���

	ch = getchar();			// ���ڸ� ���ۿ��� �ѱ��� ���� ch�� ����
	putchar(ch);			// ch ������ ���

	ch = getchar();			// ���ڸ� ���ۿ��� �ѱ��� ���� ch�� ����
	putchar(ch);			// ch ������ ���

	ch = getchar();			// ���� ���⼭(3���ڸ� �Է� ��) ����Ű�� ġ�� , ����Ű���� ���ۿ� ����� �� ch������ ���Եǰ� ��� => �ٹٲ�
	putchar(ch);

	ch = getchar();			// ���⿡�� �ѱ��ڸ� �� �Է¹��� �� �־� ����� �� ����. �׳� ����Ű�� ġ�� ����Ű���� ����� �� ��ȯ�Ǽ� �ٹٲ�� ��.
	putchar(ch);

}
