// SECTION 03 �پ��� for���� ����

//���� ���� �ʱ갪�� �������� ����ϴ� for��
// 
//�⺻ 6-16
#include<stdio.h>
int main()
{
	int i, k;

	for (i = 1, k = 1; i <= 9; i++, k++)
		printf("%dx%d=%d \n", i, k, i * k);

	for (i = 2, k = 1; i <= 9; i++)
		printf("%dx%d=%d ", i, k, i * k);

	//�ʱⰪ�� �������� ���� for ��
	printf("\n");

	int j;
	for (j = 0; j < 10; j++)
	{
		printf("%d  ", j);
	}
	printf("\n");

	j = 0;
	for (; j < 10; j++) {
		printf("%d  ", j);
	}
	printf("\n");

	j = 0;
	for (; j < 10;) {
		printf("%d  ", j);
		j++;
	}

	//self study
	printf("\n");

	int hap = 0;
	i = 1;
	for (; i <= 100; i++) {
		hap = hap + i;
	}
	printf("1���� 100������ ���� %d�Դϴ�.\n", hap);


	//�⺻ 6-17, for(;;)�� �ǹ�, ���ѷ���
	i = 0;
	for (; ; )
	{
		printf("%d \n", i);
		i++;
	}
}
