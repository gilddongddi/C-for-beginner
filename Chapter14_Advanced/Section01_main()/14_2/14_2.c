// ���� 14_2, main() �Լ������� �Ű����� ��� ��2

#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[200];
	FILE* rfp;

	if (argc != 2)
	{
		printf("\n -- �Ű������� 1�� ����ϼ��� -- \n");
		return 0;
	}

	rfp = fopen(argv[1], "r");			// ù ��° �Ű������� �Ѿ�� ���� �б� ���� ����.

	for (;;)
	{
		fgets(str, 199, rfp);			// ������ ������ �� �� �о���δ�.

		if (feof(rfp))
			break;						// ������ ���̸� ���� ������ ����

		printf("%s", str);				// ���� ������ ���
	}

	fclose(rfp);				
}