// const ����� : const�� ������ �����ϸ� �ش� ������ ������ ������ �ϴ� ���� �ƴ϶� ����� ������ �Ѵ�.


#include<stdio.h>

#define c 300

int main()
{
	const int a = 100;

	int b;

	b = a + 200;

	//a = 200;		// a �� ��� 100 ���� �����Ǿ� �����Ƿ� �� ���� ���� �����ϸ� �����߻�.


	printf("%d %d \n\n", a, b);

	printf("%d %d %d \n\n", c, c+a, c+b);
}