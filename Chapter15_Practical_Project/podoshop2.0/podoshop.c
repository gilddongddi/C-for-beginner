// SECTION 02 ������ ver 2.0

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// �׷����� ����Ϳ� ����ϴµ� ���

// ����� �Լ��� ������Ÿ�� ����
void print_menu();		//�޴����

void equal();			//�̹����� �����ϰ� ����� �Լ�
void negative();		//�̹��� ���� �Լ�
void mirror1();			//�̹��� �¿� ��Ī �Լ�
void mirror2();			//�̹��� ���� ��Ī �Լ�

void loadImage();		//�Է� ������ �迭�� �ҷ����� �Լ�
void displayImage();	//��� �̹����� ����Ϳ� ����ϴ� �Լ�
void saveImage();		//��� �̹����� ����

const char* fname = "C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\bird.raw";		//���� ���� ������ ����, 512x512 raw �̹��� ����.

unsigned char inImage[512][512], outImage[512][512];		// ����� �迭�� ������ ������ 512x512 �ȼ��� ����. �� �̹��� �ȼ��� 0~255�̹Ƿ� ������ ������ ��ȣ�� ���� �������� unsigned char�� ����

FILE* rfp, * wfp;
int i, k;

//�׷��� ����� ���� ����
HWND hwnd;
HDC hdc; 

int main()
{
	char select = 0;

	//�׷��� ����� ���� �غ�
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	//������ �ҷ��´�.
	loadImage();

	while (select != 4)
	{
		print_menu();
		select = getche();		// �ѹ���, ���̰�

		switch (select)
		{
		case'0': equal();		displayImage(); break;
		case'1': negative();	displayImage(); break;
		case'2': mirror1();		displayImage(); break;
		case'3': mirror2();		displayImage(); break;
		case'S':
		case's': saveImage();	displayImage(); break;
		case'X':
		case'x': return 0;
		default: printf("\n �߸� �Է��߾��. �ٽ� �����ϼ���.\n");
			displayImage();
		}
	}

	return 0;
}

// �Է� ������ �迭���� �д´�.
void loadImage() {
	rfp = fopen(fname, "rb");
	fread(inImage, sizeof(char), 512 * 512, rfp);
	fclose(rfp);
}

// ��� �迭�� ������ ����Ϳ� ����Ѵ�. 
void displayImage() {
	int value;
	system("cls");

	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
		{	
			value = outImage[i][k];
			SetPixel(hdc, k + 50, i + 200, RGB(value, value, value));
		}
}


// ����� ������ ���� �޴� ���
void print_menu()
{
	puts(" \n###������ ver 2.0 ### \n ");
	printf(" 0. ���� ���� \n");
	printf(" 1. ���� ���� \n");
	printf(" 2. ���� �¿� ��Ī \n");
	printf(" 3. ���� ���� ��Ī \n");
	printf(" S. ��� ���� ���� \n");
	printf(" X. ������ \n");
}


// �̹����� �����ϰ� �ϴ� �Լ�
void equal()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[i][k];
}

// �̹����� �����ϴ� �Լ�
void negative()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = 255 - inImage[i][k];
}

// �̹����� �¿� ��Ī��Ű�� �Լ�
void mirror1()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[i][511 - k];
}

// �̹����� ���� ��Ī��Ű�� �Լ�
void mirror2()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[511 - i][k];
}

// ��� �̹����� �����ϴ� �Լ�
void saveImage()
{
	wfp = fopen("C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\result.raw", "wb");
	fwrite(outImage, sizeof(char), 512 * 512, wfp);
	fclose(wfp);

	MessageBoxW(hwnd, L"��� ������ <C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\result.raw>�� �����", L"���â", NULL);
}