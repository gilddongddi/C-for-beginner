// �⺻ 14-6 static ��� ��

#include<stdio.h>

void myfunc();				// myfunc() �Լ��� ������Ÿ�� ����.

void main()
{
	myfunc();				// myfunc() �Լ� ȣ�� => 100���
	myfunc();				// myfunc() �Լ� ȣ�� => 200���
}

void myfunc()
{
	static int a = 0;		// a �� static ���� ����� �ʱ�ȭ �����Ƿ�, myfunc() ȣ�� �� ��ȣ��� �� a �� 0���� �ٽ� �ʱ�ȭ���� �ʰ� ���� ������ä ȣ��

	a = a + 100;
	printf("a�� �� ==> %d\n", a);
}