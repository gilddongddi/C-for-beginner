// SECTION 01, while문

// for 문과 while 문의 비교 - for문을 while문으로 바꾸기
#include<stdio.h>

int main()
{

	//기본 7-1
	int i;

	for (i = 0; i < 5; i++) {
		printf("for문과\n");
	}
	i = 0;
	while (i < 5) {
		printf("while문을 비교합니다\n");
		i++;
	}

	//응용 7-2
	printf("\n");

	int hap = 0;
	for (i = 1; i <= 10; i++) {
		hap = hap + i;
	}
	printf("1~10의 합은 %d입니다\n", hap);

	i = 1;
	int hap2 = 0;
	while (i <= 10) {
		hap2 = hap2 + i;
		i++;
	}
	printf("1~10의 합은 %d입니다\n", hap);

	printf("\n");

	//self study
	int hap3 = 0;
	int num1, num2, num3;

	printf(" 시작값, 끝값, 증가값 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i <= num2; i = i + num3) {
		hap3 = hap3 + i;
	}
	printf(" %d에서 %d까지 %d씩 증가한 값의 합: %d \n", num1, num2, num3, hap3);

	i = num1;
	hap3 = 0;
	while (i <= num2) {
		hap3 = hap3 + i;
		i = i + num3;
	}
	printf(" %d에서 %d까지 %d씩 증가한 값의 합: %d \n", num1, num2, num3, hap3);
}