// SECTION 02 포도샵 ver 2.0

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// 그래픽을 모니터에 출력하는데 사용

// 사용할 함수의 프로토타입 선언
void print_menu();		//메뉴출력

void equal();			//이미지를 동일하게 만드는 함수
void negative();		//이미지 반전 함수
void mirror1();			//이미지 좌우 대칭 함수
void mirror2();			//이미지 상하 대칭 함수

void loadImage();		//입력 영상을 배열에 불러오는 함수
void displayImage();	//결과 이미지를 모니터에 출력하는 함수
void saveImage();		//결과 이미지를 저장

const char* fname = "C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\bird.raw";		//원본 사진 파일을 고정, 512x512 raw 이미지 파일.

unsigned char inImage[512][512], outImage[512][512];		// 입출력 배열을 원본과 동일한 512x512 픽셀로 설정. 각 이미지 픽셀이 0~255이므로 데이터 형식은 부호가 없는 문자형인 unsigned char로 지정

FILE* rfp, * wfp;
int i, k;

//그래픽 출력을 위한 변수
HWND hwnd;
HDC hdc; 

int main()
{
	char select = 0;

	//그래픽 출력을 위한 준비
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	//파일을 불러온다.
	loadImage();

	while (select != 4)
	{
		print_menu();
		select = getche();		// 한문자, 보이게

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
		default: printf("\n 잘못 입력했어요. 다시 선택하세요.\n");
			displayImage();
		}
	}

	return 0;
}

// 입력 파일을 배열에서 읽는다.
void loadImage() {
	rfp = fopen(fname, "rb");
	fread(inImage, sizeof(char), 512 * 512, rfp);
	fclose(rfp);
}

// 출력 배열의 내용을 모니터에 출력한다. 
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


// 사용자 선택을 위한 메뉴 출력
void print_menu()
{
	puts(" \n###포도샵 ver 2.0 ### \n ");
	printf(" 0. 원본 영상 \n");
	printf(" 1. 영상 반전 \n");
	printf(" 2. 영상 좌우 대칭 \n");
	printf(" 3. 영상 상하 대칭 \n");
	printf(" S. 결과 영상 저장 \n");
	printf(" X. 끝내기 \n");
}


// 이미지를 동일하게 하는 함수
void equal()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[i][k];
}

// 이미지를 반전하는 함수
void negative()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = 255 - inImage[i][k];
}

// 이미지를 좌우 대칭시키는 함수
void mirror1()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[i][511 - k];
}

// 이미지를 상하 대칭시키는 함수
void mirror2()
{
	for (i = 0; i < 512; i++)
		for (k = 0; k < 512; k++)
			outImage[i][k] = inImage[511 - i][k];
}

// 결과 이미지를 저장하는 함수
void saveImage()
{
	wfp = fopen("C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\result.raw", "wb");
	fwrite(outImage, sizeof(char), 512 * 512, wfp);
	fclose(wfp);

	MessageBoxW(hwnd, L"결과 영상이 <C:\\Users\\user\\Documents\\C-for-beginner\\temp\\raw_files\\result.raw>로 저장됨", L"출력창", NULL);
}