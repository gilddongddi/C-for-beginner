// SECTION 02 �޸𸮿� �ּ�

// �⺻ 9-3 ������ �ּ� �˾Ƴ���

#include<stdio.h>

int main()
{
	int a = 100;
	int b = 200;

	printf("���� a�� �ּҴ� %d�Դϴ�. \n", &a);
	printf("���� b�� �ּҴ� %d�Դϴ�. \n", &b);

	printf("\n");

	int aa[3] = { 10,20,30 };
	
	printf("aa[0]�� ���� %d, �ּҴ� %d \n", aa[0], &aa[0]);
	printf("aa[1]�� ���� %d, �ּҴ� %d \n", aa[1], &aa[1]);
	printf("aa[2]�� ���� %d, �ּҴ� %d \n", aa[2], &aa[2]);
	printf("�迭 �̸� aa�� ��(=�ּ�)�� %d \n", aa);   // �迭 �̸� aa�� ���(������ ���)�μ� �� ��ü�� �ּҸ� �ǹ�
	printf("\n");

	char bb[3] = { 10,20,30 };
	printf("%d %d\n", bb[0], &bb[0]);
	printf("%d %d\n", bb[1], &bb[1]);
	printf("%d %d\n", bb[2], & bb[2]);
	printf("%d\n",bb);

	printf("\n");

	short cc[3] = { 10,20,30 };
	printf("%d %d\n", cc[0], &cc[0]);
	printf("%d %d\n", cc[1], &cc[1]);
	printf("%d %d\n", cc[2], &cc[2]);
	printf("%d \n", cc);

	printf("\n");

	printf("%d %d \n", &cc[0], cc + 0);
	printf("%d %d \n", &cc[1], cc + 1);
	printf("%d %d \n", &cc[2], cc + 2);

}