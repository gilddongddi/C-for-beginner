// self study: ���� 7-6 �� ��ø if������ �ٲٱ�
#include<stdio.h>

int main(){

//do {
//	printf("\n�մ� �ֹ��Ͻðڽ��ϱ�?\n");
//	printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
//	scanf_s("%d", &menu);
//
//	switch (menu)
//	{
//	case 1: printf("#ī��� �ֹ��ϼ̽��ϴ�. \n"); break;
//	case 2: printf("#īǪġ�� �ֹ��ϼ̽��ϴ�. \n"); break;
//	case 3: printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�. \n"); break;
//	case 4: printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
//	dedault: printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
//	}
//} while (menu != 4);
int menu;
		
	printf("\n�մ� �ֹ��Ͻðڽ��ϱ�?\n");
	printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
	scanf_s("%d", &menu);

	if (menu == 1)
		printf("#ī��� �ֹ��ϼ̽��ϴ�. \n");
	else 
		if (menu == 2)
			printf("#īǪġ�� �ֹ��ϼ̽��ϴ�. \n");
		else 
			if (menu == 3)
				printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�. \n");
			else 
				if (menu = 4)
				{
					printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); 
					return;
				}
				else
					printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
}