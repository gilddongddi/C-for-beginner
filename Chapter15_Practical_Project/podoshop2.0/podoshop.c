// SECTION 02 ������ ver 2.0

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// �׷����� ����Ϳ� ����ϴµ� ���

// ����� �Լ��� ������Ÿ�� ����
void printf_menu();		//�޴����

void equal();			//�̹����� �����ϰ� ����� �Լ�
void negative();		//�̹��� ���� �Լ�
void mirror1();			//�̹��� �¿� ��Ī �Լ�
void mirror2();			//�̹��� ���� ��Ī �Լ�

void loadImage();		//�Է� ������ �迭�� �ҷ����� �Լ�
void displayImage();	//��� �̹����� ����Ϳ� ����ϴ� �Լ�
void saveImage();		//��� �̹����� ����

const char* fname = "D:\\documents\\c_for_beginner\\temp\\bird.raw";		//���� ���� ������ ����

unsigned char inImages[512][512], outImage[512][512];		// ����� �迭�� ������ ������ 512x512 �ȼ��� ����. �� �̹��� �ȼ��� 0~255�̹Ƿ� ������ ������ ��ȣ�� ���� �������� unsigned char�� ����

FILE* rfp, * wfp;
int i, k;

//�׷��� ����� ���� ����
HWND hwnd;
HDC hdc; 

