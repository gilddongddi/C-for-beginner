// SECTION 02 메모리와 주소

// 기본 9-3 변수의 주소 알아내기

#include<stdio.h>

int main()
{
	int a = 100;
	int b = 200;

	printf("변수 a의 주소는 %d입니다. \n", &a);
	printf("변수 b의 주소는 %d입니다. \n", &b);

	printf("\n");

	int aa[3] = { 10,20,30 };
	
	printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
	printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
	printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);
	printf("배열 이름 aa의 값(=주소)는 %d \n", aa);   // 배열 이름 aa는 상수(포인터 상수)로서 그 자체가 주소를 의미
	printf("\n");

	char bb[3] = { 10,20,30 };
	printf("%d %d\n", bb[0], &bb[0]);
	printf("%d %d\n", bb[1], &bb[1]);
	printf("%d %d\n", bb[2], & bb[2]);
	printf("%d\n",bb);

	printf("\n");

	short cc[3] = { 10,20,30 };
	printf("%d %d\n", cc[0], &cc[0]);
	printf("%d %d\n", cc[1], &cc[1]);
	printf("%d %d\n", cc[2], &cc[2]);
	printf("%d \n", cc);

	printf("\n");

	printf("%d %d \n", &cc[0], cc + 0);
	printf("%d %d \n", &cc[1], cc + 1);
	printf("%d %d \n", &cc[2], cc + 2);

}