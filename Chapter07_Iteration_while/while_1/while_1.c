// SECTION 01, while��

// for ���� while ���� �� - for���� while������ �ٲٱ�
#include<stdio.h>

int main()
{

	//�⺻ 7-1
	int i;

	for (i = 0; i < 5; i++) {
		printf("for����\n");
	}
	i = 0;
	while (i < 5) {
		printf("while���� ���մϴ�\n");
		i++;
	}

	//���� 7-2
	printf("\n");

	int hap = 0;
	for (i = 1; i <= 10; i++) {
		hap = hap + i;
	}
	printf("1~10�� ���� %d�Դϴ�\n", hap);

	i = 1;
	int hap2 = 0;
	while (i <= 10) {
		hap2 = hap2 + i;
		i++;
	}
	printf("1~10�� ���� %d�Դϴ�\n", hap);

	printf("\n");

	//self study
	int hap3 = 0;
	int num1, num2, num3;

	printf(" ���۰�, ����, ������ �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i <= num2; i = i + num3) {
		hap3 = hap3 + i;
	}
	printf(" %d���� %d���� %d�� ������ ���� ��: %d \n", num1, num2, num3, hap3);

	i = num1;
	hap3 = 0;
	while (i <= num2) {
		hap3 = hap3 + i;
		i = i + num3;
	}
	printf(" %d���� %d���� %d�� ������ ���� ��: %d \n", num1, num2, num3, hap3);
}