#include<stdio.h>

int a;

int main()
{

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);


	if (a >= 95)
		printf("A+");
	else if (a >= 90)
		printf("A0");
	else if (a >= 85)
		printf("B+");
	else if (a >= 80)
		printf("B0");
	else if (a >= 75)
		printf("C+");
	else if (a >= 70)
		printf("C0");
	else if (a >= 65)
		printf("D+");
	else if (a >= 60)
		printf("D0");
	else
		printf("F");

	printf(" 학점입니다.\n");
}