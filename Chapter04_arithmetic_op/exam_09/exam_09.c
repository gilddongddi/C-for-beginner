// ***���� ��ȯ ���α׷�***
// 
//�Էµ� �׼���ŭ 500��, 100��, 50��, 10��¥�� �������� ��ȯ���ִ� ���α׷��̴�.
//����1)������ �Ѽ��� �ּ�ȭ�Ѵ�.
//����2)����� ������ ���� �ٲ��ش�.



#include<stdio.h>

int cash;
int n500, n100, n50, n10;
int charge;

int main()
{
	printf("***�󸶸� ��ȯ�Ͻǰǰ���? ==> ");
	scanf("%d", &cash);


	n500 = cash / 500;
	charge = cash % 500;
	n100 = charge / 100;
	charge = charge % 100;
	n50 = charge / 50;
	charge = charge % 50;
	n10 = charge / 10;
	charge = charge % 10;

	printf("\n�Ա��Ͻ� �ݾ� %d\n", cash);
	printf("500�� : %d ��\n", n500);
	printf("100�� : %d ��\n", n100);
	printf(" 50�� : %d ��\n", n50);
	printf(" 10�� : %d ��\n", n10);
	printf("�Ž�����: %d ��\n", charge);



//#include<stdio.h>
//
//int cash;
//int c500 = 500; c100 = 100;  c50 = 50; c10 = 10;
//int n500, n100, n50, n10;
//int charge;
//
//int main()
//{
//	printf("�󸶸� ��ȯ�Ͻǰǰ���? ==> ");
//	scanf("%d", &cash);
//
//
//	n500 = cash / c500;
//	charge = cash % c500;
//	n100 = charge / c100;
//	charge = charge % c100;
//	n50 = charge / c50;
//	charge = charge % c50;
//	n10 = charge / c10;
//	charge = charge % c10;
//
//	printf("\n�Ա��Ͻ� �ݾ� %d\n", cash);
//	printf("500�� : %d ��\n", n500);
//	printf("100�� : %d ��\n", n100);
//	printf(" 50�� : %d ��\n", n50);
//	printf(" 10�� : %d ��\n", n10);
//	printf("�Ž�����: %d", charge);
}