
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

	// �⺻ 6-7 for���� Ȱ���� �հ� ���ϱ�

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
}

