//�ݺ����� Ż���ϴ� break��

//�⺻ 7-7
#include<stdio.h>

int main()
{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("for���� %dȸ �����߽��ϴ�.\n", i);
//		break;
//	}
//	printf("for���� �����߽��ϴ�.\n\n");


	//�⺻ 7-8
	//int a, b;

	//while (1)
	//{
	//	printf("���� �� �� �Է�(���߷��� 0 0�� �Է�) :");
	//	scanf_s("%d %d", &a, &b);

	//	if (a == 0)
	//		break;
	//	
	//	printf("%d + %d = %d \n", a, b, a + b);
	//}

	//printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�. \n");

	//���� 7-9  1+2+3+4+...+�׸�=1000 �̻�'���� �׸� �� �� �˾Ƴ���
	//int i;
	//int hap = 0;
	//for (i = 1; i <= 1000; i++)
	//{
	//	hap = hap + i;
	//	printf("%d = %d + %d\n", hap,hap-i, i);

	//	if (hap >= 1000)
	//		break;
		
		
	//}
	//printf("�׸� �� ���� %d�Դϴ�. \n",i);

	int hap = 0;
	int i = 1;
	while(1)
	{
		hap = hap + i;
		printf("%5d = %5d + %2d\n", hap, hap - i, i);

		if (hap >= 1000)
			break;
		i = i + 1;

	}
	printf("�׸� �� ���� %d�Դϴ�. \n", i);
}
