// �⺻ 14-1, main() �Լ������� �Ű����� ��� ��1

#include<stdio.h>

int main(int argc, char* argv[])							// �Ű����� ����
{
	int i;

	printf(" argc �Ű����� ���� ==> %d \n", argc-1);				// �Ű������� ���� ���

	for (i = 1; i < argc; i++)								// �Ű����� ������ŭ �ݺ��Ͽ� �Ű������� ������ ���
		printf(" argv[%d] �Ű����� ==> %s \n", i, argv[i]);
}