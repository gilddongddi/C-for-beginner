// SECTION 02 : do~ while ��, ��� ��쿡�� �� ���� ������ ���� <- �ݺ����� ���ʿ� ����

// �⺻ 7-5
#include<stdio.h>

int main()
{
	int a = 100;
	//int a = 200;

	while (a == 200)
	{
		printf("while�� ���ο� ��� �Խ��ϴ�.\n");
	}

	do {
		printf("do~while�� ���ο� ��� �Խ��ϴ�.\n");
	} while (a == 200);


	// ���� 7-6
	int menu;

	do {
		printf("\n�մ� �ֹ��Ͻðڽ��ϱ�?\n");
		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
		scanf_s("%d", &menu);

		switch (menu)
		{
		case 1: printf("#ī��� �ֹ��ϼ̽��ϴ�. \n"); break;
		case 2: printf("#īǪġ�� �ֹ��ϼ̽��ϴ�. \n"); break;
		case 3: printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�. \n"); break;
		case 4: printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
		dedault: printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
		}
	} while (menu != 4);
}