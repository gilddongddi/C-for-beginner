// �⺻ 14-5 #define �� ��� ��

#include<stdio.h>

#define PI 3.1415926535
#define STR "���� ������ ����߽��ϴ�. \n"
#define END_MSG printf("���α׷��� ����Ǿ����ϴ�. \n\n")

void main()
{
	printf("�������� 10�� ���� ������ ==> %10.5f \n", 10 * 10 * PI);

	printf(STR);

	END_MSG;

	printf("\n\n");

	printf("���� ������ ����߽��ϴ�. \n");
	printf("���� ������ ����߽��ϴ�. \n");
	printf("���� ������ ����߽��ϴ�. \n");

	printf("\n");

	printf("STR");
	printf("STR\n");
	printf(STR);
	printf(STR);

	printf("\n");
}