// ���� 6-14, ��ø for�� ��� ��2, ������

#include<stdio.h>

int main() {

	int a, b;

	for (a = 2; a <= 9; a++) {

		printf("%d���Դϴ�\n\n", a);

		for (b = 1; b <= 9; b++) {

			printf("%d * %d = %d\n", a, b, a * b);

		}
	}
	printf("\n");

	// ���� 6-15, ��ø for�� ��� ��3, ������ �������
	int i, k;
	
	for(i=1; i <= 9; i++) {

		for (k = 2; k <= 9; k++) {
			printf("%2dx%2d=%2d ", k, i, k * i);
		}
		printf("\n");
	}
}