// ���� �Լ��� �ҷ��� ������ ���ư��� return��
// �⺻ 7-12
#include<stdio.h>

int main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		hap = hap + i;
	}
	printf("1���� 100������ ���� %d�Դϴ�.\n", hap);
	return 0;

	printf("���α׷��� ���Դϴ�.\n"); //return���� ����Ǹ鼭 �Ʒ� �ݺ������� �߱�� main()�Լ� ������ ������
}