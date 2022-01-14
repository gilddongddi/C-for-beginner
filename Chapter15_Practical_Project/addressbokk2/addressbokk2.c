// ����ó ���α׷�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����ó ����ü ����
struct address {
	char name[30];
	char age[5];
	char phone[15];
};

void print_menu();
void view_juso();
void add_juso();
void delete_juso();

//����ó ���ϸ��� ���������� ����.
const char* fname = "D:\\Documents\\c_for_Beginner\\temp\\juso.txt";


int main()
{
	char select = 0;
	puts(" \n### ģ�� ���� Ver 2.0 ### \n");

	while (select != 4)
	{
		print_menu();
		select = getche();				// getch() : ���� �ϳ�, ����Ϳ� ǥ��
		getchar();						// getchar() : ����ĥ ������ �Է��� �����͸� �޸�(����)�� ����, �ѹ��ڸ� ����
		switch (select)
		{
		case'1': view_juso();
			break;
		case'2': add_juso();
			break;
		case'3': delete_juso();
			break;
		case'4': return 0;
			break;
		default: printf("\n�߸� �Է��߾��. �ٽ� �����ϼ���.\n");
		}
	}

	return 0;							// �Լ��� ȣ���� ������ ���ư�.  main()�Լ��� ��� ȣ������?
}

// ���� ������� ������ ���� �޴��� ���
void print_menu()
{
	printf("\n");
	printf("1. ����ó ��� \n");
	printf("2. ����ó ��� \n");
	printf("3. ����ó ���� \n");
	printf("4. ������ \n");
}

// ����ó ���Ͽ��� ������ �Էµ� ������ �о ���
void view_juso()
{
	char str[200] = "";				// ������ �迭 str ����� ������ �������� �ʱ�ȭ
	FILE* rfp, * wfp;				// ���� ������ ���� rfp, wfp ����
	int i;							// ÷�� ���� ����

	rfp = fopen(fname, "r");		// fname ������ ������ ���Ե� juso.txt ������ �о rfp �� ����

// ���� ����ó ������ ���ٸ� �� ������ ����
	if (rfp == NULL)
	{
		wfp = fopen(fname, "w");
		fclose(wfp);
		rfp = fopen(fname, "r");
	}

	//������ ����ó�� ��� �о ���
	for (i = 0;; i++)	// 1�� �����ϴ� ���ѷ���
	{
		fgets(str, 200, rfp);		// rfp���� ���� �о�ͼ� str�� ����

		if (feof(rfp))
			break;

		printf("%d: %s", i, str);		// �о str�� ����� �����͸� ȭ�鿡 ���(����)

	}

	//i �� 1�̸� ���� ���Ͽ��� ������ ����
	if (i == 1)
		puts("\n ** ����ó ���Ͽ� ��ȭ��ȣ�� �ϳ��� �����. ** \n");

	fclose(rfp);
}

// ����ó �߰�
void add_juso()
{
	struct address adr = { "", "", "" };	// ����ü ���� �����ϰ� �������� �ʱ�ȭ
	char wstr[200] = "";					// ������ �迭 wstr �����ϰ� �������� �ʱ�ȭ
	FILE* wfp;

	wfp = fopen(fname, "a");				// fname�� ���Ե� ������ ���Ը��� ��� ���������� ���� wfp�� ����

	printf("�̸��� �Է� ==> : ");
	gets(adr.name);							// �̸��� �Է¹޾� ����ü ���� adr�� ��������� name�� ����
	printf("���̸� �Է� ==> : ");
	gets(adr.age);
	printf("��ȭ��ȣ�� �Է� ==> : ");
	gets(adr.phone);

	// �Էµ� 3���� ���� �ϳ��� ���ڿ��� �����
	strcat(wstr, adr.name);
	strcat(wstr, "\t");
	strcat(wstr, adr.age);
	strcat(wstr, "\t");
	strcat(wstr, adr.phone);
	strcat(wstr, "\n");

	fputs(wstr, wfp);						// �ϳ��� ���ڿ��� ������� wstr�� ����� �����͸� wfp�� ���Ե� ���Ͽ� ��
	fclose(wfp);
}

// ����ó ���Ͽ��� ������ ����ó�� ����
void delete_juso()
{
	char read_str[50][200] = { "", };		// ����ó ������ ���� ��ü�� �����ϱ� ���� 2���� �迭 �����ϰ� �������� �ʱ�ȭ

	char str[200] = "";						// ������ �迭 str �����ϰ� �������� �ʱ�ȭ
	FILE* rfp, * wfp;
	int del_line, i, count = 0;

	rfp = fopen(fname, "r");

	// ����ó ������ ������ ȣ���� ������ ���ư�
	if (rfp == NULL)
	{
		puts("\n!! ����ó ������ �����ϴ�. !!\n");
		return;
	}

	printf("\n������ �� ��ȣ�� ? ");
	scanf("%d", &del_line);

	for (i = 0; i < 50; i++)
	{
		strcpy(str, "");					// str �迭�� �������� �����
		fgets(str, 200, rfp);				// rfp ���� �����͸� �����ٰ� str �迭�� ����

		if (i + 1 != del_line)				// �����ϴ� ���� �ƴ϶��
		{
			strcpy(read_str[i], str);		// str �迭�� ������ ���ڿ��� read_str[i]�� ����
			count++;							// 50�� �ݺ�
		}
		else
			printf("%d ���� �����Ǿ����ϴ�. \n", del_line);

		if (feof(rfp))
			break;
	}
	
	fclose(rfp);

	// ������ ���� ���� ���� ���ο� ������ ��
	wfp = fopen(fname, "w");

	for (i = 0; i < count; i++)
		fputs(read_str[i], wfp);
	fclose(wfp);
	


}


