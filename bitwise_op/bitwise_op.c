#include <stdio.h>

int main(void) {

	// 기본 4-8: 비트 논리곱 연산자 사용 예
	printf("//기본 4-8 비트 논리곱 연산자 사용 예\n");
	printf(" 10 & 7 = %d \n", 10 & 7);
	printf(" 123 & 456 = %d \n", 123 & 456);
	printf(" 0xFFFF & 0000 = %d \n", 0xFFFF & 0000);

	printf("\n");
	printf("\n");

	// 기본 4-9: 비트 논리합 연산자 사용 예
	printf("// 기본 4-9 비트 논리합 연산자 사용 예\n");
	printf(" 10 | 7 = %d \n", 10 | 7);
	printf(" 123 | 456 = %d \n", 123 | 456);
	printf(" 0xFFFF | 0000 = %d \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %x \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %o \n", 0xFFFF | 0000);

	printf("\n");
	printf("\n");

	//기본 4-10: 비트 배타적 논리합 연산자 사용 예
	printf("//기본 4-10: 비트 배타적 논리합 연산자 사용 예\n");
	printf(" 10 ^ 7 = %d \n", 10 ^ 7);
	printf(" 123 ^ 456 = %d \n", 123 ^ 456);
	printf(" 0xFFFF ^ 0000 = %d \n", 0xFFFF ^ 0000);

	printf("\n");
	printf("\n");

	//응용 4-11: 비트 연산에 마스크를 사용한 예
	printf("/응용 4-11: 비트 연산에 마스크를 사용한 예\n");

	char a = 'A', b, c;
	char mask = 0x0F;

	printf(" %x & %x = %x \n", a, mask, a & mask);
	printf(" %x | %x = %x \n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = 'A' ^ mask;
	printf(" %d ^ %d = %c \n", a, mask, b);

	a = 'a' ^ mask;
	printf(" %c ^ %d = %c \n", b, mask, a);

}