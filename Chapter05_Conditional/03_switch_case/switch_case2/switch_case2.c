// ���� 5-10, switch~case�� ��� ��2

#include<stdio.h>

int main()
{
	int year;

	printf("����⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &year);

	switch (year%12)
	{
	case 0: printf("�����̶�\n"); break;
	case 1: printf("�߶�\n"); break;
	case 2: printf("����\n"); break;
	case 3: printf("������\n"); break;
	case 4: printf("���\n"); break;
	case 5: printf("�Ҷ�\n"); break;
	case 6: printf("ȣ���̶�\n"); break;
	case 7: printf("�䳢��\n"); break;
	case 8: printf("���\n"); break;
	case 9: printf("���\n"); break;
	case 10: printf("����\n"); break;
	case 11: printf("���\n"); break;
	}


	//self study: if~else ������ �����غ���

	if (year % 12 == 0)
		printf("�����̶�\n");

	else if (year % 12 == 1)
		printf("�߶�\n");

	else if (year % 12 == 2)
		printf("����\n");

	else if (year % 12 == 3)
		printf("������\n");

	else if (year % 12 == 4)
		printf("���\n");

	else if (year % 12 == 5)
		printf("�Ҷ�\n");

	else if (year % 12 == 6)
		printf("ȣ���̶�\n");

	else if (year % 12 == 7)
		printf("�䳢��\n");

	else if (year % 12 == 8)
		printf("���\n");

	else if (year % 12 == 9)
		printf("���\n");

	else if (year % 12 == 10)
		printf("����\n");

	else if (year % 12 == 11)
		printf("���\n");


}