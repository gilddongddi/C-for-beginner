
// �⺻6-4 for �� ��� �� 1


#include<stdio.h>

int main()
{
	int i;

	for (i = 5; i > 0; i--)
	{
		printf("%d : �ȳ��ϼ���? ���ۺ��� for���� �������Դϴ�. ^^\n", i);
	}

	printf("\n\n");

	// �⺻6-5 for�� ��� �� 2

	for (i = 1; i <= 5; i++)
	{
		printf("%d \n", i);
	}

	printf("\n\n");

	//self study
	for (i = 10; i <= 20; i++)
	{
		printf("%d \t", i);
	}


	// �⺻ 6-6 for���� Ȱ������ �ʰ� �հ� ���ϱ�

	int hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	printf("\n\n1~10������ �� = %d\n", hap);



	// �⺻ 6-7, 6-8  for���� Ȱ���� �հ� ���ϱ�

	hap = 0;
	for (i = 1; i <= 10; i++)
	{
		hap += i;  
		// hap = hap + i;
	}
	printf("1~10������ �� = %d\n", hap);



	// self study

	hap = 0;
	for (i = 1; i <= 12345; i++)
	{
		hap += i;
	}
	printf("1~12345������ �� = %d\n", hap);

	printf("\n\n");


	// ����6-9 for���� Ȱ���Ͽ� �հ� ���ϱ� 3
	hap = 0;
	for (i = 501; i <= 1000; i+=2)			// i�� 2�� ������Ű�� ���ؼ���, i=i+2 or i += 2
	{
		/*hap = hap + i;*/
		hap += i;
	}
	printf("500~1000������ Ȧ���� �� : %d\n", hap);


	// self study
	hap = 0;
	for (i = 3; i <= 100; i=i+3)			
	{
		/*hap = hap + i;*/
		hap += i;
	}
	printf("1~100������ 3�� ����� �� : %d\n", hap);


	// �⺻ 6-10 ����ڰ� ���ϴ� ���� �Է��ϰ� 1���� �Է��� ������ ���ϴ� ���α׷�
	// 
	//hap = 0;
	//int num;

	//printf("�� �Է�: ");
	//scanf_s("%d", &num);

	//for (i = 0; i <= num; i++)
	//	hap += i;
	//printf("1~ %d���� ���� ���� %d�Դϴ�. \n\n", num, hap);

	
	// ����6-11 ���۰�, ������, ���������� ����ڰ� �Է��Ͽ� ���ϵ��� �ϴ� ���α׷�

	int a, b, c;
	hap = 0;
	printf("\n\n *** ���۰�, ������, �������� �Է��ϼ���:\n ");
	//scanf_s("%d %d %d", &a, &b, &c);

	printf("������ ���� �Է� : ");
	scanf_s("%d", &a);
	printf("������ ���ڸ� �Է� : ");
	scanf_s("%d", &b);
	printf("���ϴ� ������ �Է� : ");
	scanf_s("%d", &c);

	for (i = a; i <= b; i = i + c)
		hap = hap + i;
	printf("%d���� %d���� %d�� ������ ���� ���� %d�Դϴ�\n\n\n", a, b, c, hap);


	//�⺻6-12 for���� �̿��� ������ ���α׷�
	
	int dan;
	int result;

	printf("������ �� ��? : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++)
	{
		//result = dan * i;
		//printf("%d * %d = %d\n", dan, i, result);
		printf("%d * %d = %d \n", dan, i, dan * i);
	}

	//self study : �ݴ뱸����
	printf("\n�ݴ뱸����\n");
	for (i = 9; i >=1; i--)
	{
		//result = dan * i;
		//printf("%d * %d = %d\n", dan, i, result);
		printf("%d * %d = %d \n", dan, i, dan * i);
	}

}

