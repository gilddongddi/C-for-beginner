// ex37: �ؽ�Ʈ ���� ����

// ���� ��ɾ� �� copy ��ɾ�� �����ϰ� �ؽ�Ʈ ������ �����ϴ� ���α׷�.

#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[200];				// �� ���� �ִ� 199�ڷ� ����
	FILE* rfp;					
	FILE* wfp;					// �б�� & ����� ������ ���� ����

	if (argc != 3)
	{
		printf("\n -- �Ű������� 2�� ����ϼ��� --\n");
		return 0;
	}

	rfp = fopen(argv[1], "r");		// �б� ����� ������ ��� �ּҸ� rfp�� ����
	wfp = fopen(argv[2], "w");		// ���� ����� ������ ��� �ּҸ� wfp�� ����

	for (;;)
	{
		fgets(str, 199, rfp);		// �������Ͽ��� �� ���� �о��

		if (feof(rfp))
			break;

		fputs(str, wfp);			// ���� ���� ��� ���Ͽ� ��
	}

	fclose(rfp);
	fclose(wfp);
}