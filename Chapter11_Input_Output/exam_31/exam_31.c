// ex31 ���Ͽ��� �о�� ���ڿ��� �ٸ� ���Ͽ� �ݴ� ������ ����ϱ�

#include<stdio.h>
#include<string.h>

int main()
{
	char a[200];
	char b[200];
	int i = 0;

	FILE* rfp;
	FILE* wfp;

	rfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\in.txt", "r");
	wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\out.txt", "w");

	for (;;)
	{
		fgets(a, 200, rfp);

		if (feof(rfp))
			break;
	}
	for (i = 0; i < strlen(a); i++)
	{
		b[i] = a[strlen(a) - i - 1];
	}

	b[strlen(b) - 1] = '\0';

	fputs(b, wfp);

	fclose(rfp);
	fclose(wfp);
}