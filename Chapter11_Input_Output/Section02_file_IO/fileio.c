// SECTION 02 ���� ����� �Լ�

// ������ �̿��� �Է�
// �⺻ 11-7

//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data.txt", "r");
//
//	fgets(s, 20, rfp);			// fgets(���ڹ迭, ���� �ִ� ���� ��, ���� ������);  �ִ� 19�ڸ� �о��. 1�ڴ� null����
//
//	printf("���Ͽ��� ���� ���ڿ� : ");
//	puts(s);
//
//	fclose(rfp);
//}


// ���� 11-8 ���� ��ɾ� type ����   // ���ٸ��� �� ��ȣ�� ���

//#include<stdio.h>
//
//void main()
//{
//	char str[200];		// �ѹ��� 199�ڱ��� ����
//	int i;
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");		//  ���丮 ������ \\ �ΰ� ��� ��
//
//	for (i = 0; i < 200;i++)			//���ѷ���
//	{
//		str[i]= fgets(str, 200, rfp);						// fgets() ������ '�� �پ�' �о��, �ε������� ���پ� ����!
//
//		if (feof(rfp))	//feof() ������ ������ �����ϴ� �Լ�. f end of?
//			break;
//
//		printf("%d: %s\n", i+1, str);
//		//printf("%s", str);
//	}
//
//	fclose(rfp);
//
//	// ����� �Ǵµ�, �ε����� �ش��ϴ� ���� ������. �� �׷���?
//}



// �⺻ 11-0 ������ �����Ͽ� ���� �б� : fscanf()		fscanf(���� ������, "����", �Է��� �Ű�������~);

//#include<stdio.h>
//
//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;				// �о�� ���� ������ �ݺ��� ���� ÷�� ����
//
//	rfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data2.txt", "r");		//���丮�� ������ \\ �ΰ���
//
//	for (i = 0; i < 5; i++)		// data2.txt ���Ͽ� �����Ͱ� 5�� �־
//	{
//		fscanf(rfp, "%d", &in);		// �ѹ��� ���پ� �б� ������, ���� �а� ���� in�� �����ϰ� �װ� hap�� ���ϰ�.. �ݺ�
//		hap = hap + in;
//	}
//
//	printf("�հ� ==> %d\n", hap);
//
//	fclose(rfp);
//}



// �⺻ 11-10 ������ �̿��� ���: fputs()

//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//	FILE* wfp;
//
//	//wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data3.txt", "w");		//w : write
//	wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data3.txt", "a");		//a : append
//
//
//	printf("���ڿ��� �Է�(�ִ� 19��) :");
//	gets(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}



// ���� 11-11 ���� ��ɾ� copy ����
//#include<stdio.h>
//
//void main()
//{
//	char str[200];
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data5.txt", "w");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//		fputs(str, wfp);
//	}
//
//	fclose(rfp);
//	fclose(wfp);
//}




// �⺻ 11-12 ������ �����Ͽ� ���� ��� : fprintf()

#include<stdio.h>

void main()
{
	FILE* wfp;
	int hap = 0;
	int in, i;

	wfp = fopen("C:\\users\\user\\documents\\c-for-beginner\\temp\\data7.txt", "w");

	for (i = 0; i < 5; i++)
	{
		printf(" ���� %d : ", i + 1);
		scanf_s("%d", &in);
		hap = hap + in;					// ���� 5���� �Է¹޾Ƽ� ���� ���� hap�� ����

	}
	fprintf(wfp, "�հ� ==> : %d\n", hap);	// hap�� ���� data7.txt ���Ͽ� ����

	fclose(wfp);
}