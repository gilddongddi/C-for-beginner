// SECTION 02 포도샵 ver 2.0

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// 그래픽을 모니터에 출력하는데 사용

// 사용할 함수의 프로토타입 선언
void printf_menu();		//메뉴출력

void equal();			//이미지를 동일하게 만드는 함수
void negative();		//이미지 반전 함수
void mirror1();			//이미지 좌우 대칭 함수
void mirror2();			//이미지 상하 대칭 함수

void loadImage();		//입력 영상을 배열에 불러오는 함수
void displayImage();	//결과 이미지를 모니터에 출력하는 함수
void saveImage();		//결과 이미지를 저장

const char* fname = "D:\\documents\\c_for_beginner\\temp\\bird.raw";		//원본 사진 파일을 고정

unsigned char inImages[512][512], outImage[512][512];		// 입출력 배열을 원본과 동일한 512x512 픽셀로 설정. 각 이미지 픽셀이 0~255이므로 데이터 형식은 부호가 없는 문자형인 unsigned char로 지정

FILE* rfp, * wfp;
int i, k;

//그래픽 출력을 위한 변수
HWND hwnd;
HDC hdc; 

