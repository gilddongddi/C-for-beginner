#include <stdio.h>

int main(void) {

	// 기본 4-8: 비트 논리곱(&) 연산자 사용 예

	printf("기본 4-8 비트 논리곱(&) 연산자 사용 예\n");
	printf(" 10 & 7 = %d \n", 10 & 7);
	printf(" 123 & 456 = %d \n", 123 & 456);
	printf(" 0xFFFF & 0000 = %d \n", 0xFFFF & 0000);

	printf("\n");
	printf("\n");


	// 기본 4-9: 비트 논리합(|) 연산자 사용 예

	printf("기본 4-9 비트 논리합(|) 연산자 사용 예\n");
	printf(" 10 | 7 = %d \n", 10 | 7);
	printf(" 123 | 456 = %d \n", 123 | 456);
	printf(" 0xFFFF | 0000 = %d \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %x \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %o \n", 0xFFFF | 0000);

	printf("\n");
	printf("\n");


	//기본 4-10: 비트 배타적 논리합(^) 연산자 사용 예

	printf("기본 4-10: 비트 배타적 논리합(^) 연산자 사용 예\n");
	printf(" 10 ^ 7 = %d \n", 10 ^ 7);
	printf(" 123 ^ 456 = %d \n", 123 ^ 456);
	printf(" 0xFFFF ^ 0000 = %d \n", 0xFFFF ^ 0000);

	printf("\n");
	printf("\n");



	//응용 4-11: 비트 연산에 마스크를 사용한 예

	printf("응용 4-11: 비트 연산에 마스크를 사용한 예\n");

	char a = 'A', b, c;
	char mask = 0x0F;  //16진수(Ox)0F 는 2진수로 0000 1111 == 10진수  15

	printf(" %x & %x = %x \n", a, mask, a & mask);
	printf(" %x | %x = %x \n", a, mask, a | mask);

	mask = 'a' - 'A';    // 'a' 는 0x61, 'A'는 0x41  둘의 차는 0x20  == 2진수 0010 0000 == 10진수 32(2^5)

	b = 'A' ^ mask;  
	printf(" %d ^ %d = %c \n", a, mask, b);

	a = 'a' ^ mask;
	printf(" %c ^ %d = %c \n", b, mask, a);




	//비트 부정(~) 연산자 사용 예

	printf("\n\n비트 부정(~) 연산자 사용 예\n ");

	int d = 12345;
	printf(" %d \n", ~d + 1); // 2의 보수....???????????



	//기본 4-13 비트 왼쪽 시프트(<<)연산자 사용 예
	printf("\n\n기본 4-13 비트 왼쪽 시프트(<<)연산자 사용 예 \n");

	int e = 10;
	printf(" %d 를 왼쪽1회 시프트하면 %d 이다.\n", e, e<<1);
	printf(" %d 를 왼쪽2회 시프트하면 %d 이다.\n", e, e << 2);
	printf(" %d 를 왼쪽3회 시프트하면 %d 이다.\n", e, e << 3);



	//기본 4-14 비트 오른쪽 시프트(>>)연산자 사용 예
	printf("\n\n기본 4-14 비트 오른쪽 시프트(>>)연산자 사용 예 \n");

	e = 10;
	printf(" %d 를 오른쪽1회 시프트하면 %d 이다.\n", e, e >> 1);
	printf(" %d 를 오른쪽2회 시프트하면 %d 이다.\n", e, e >> 2);
	printf(" %d 를 오른쪽3회 시프트하면 %d 이다.\n", e, e >> 3);



	//응용 40-15 비트 왼쪽 시프트, 오른쪽 시프트 연산자 사용 예
	printf("\n\n응용 40-15 비트 왼쪽 시프트, 오른쪽 시프트 연산자 사용 예");

	e = 100;
	int result;
	int i;

	for (i = 1; i <= 5; i++)
	{
		result = e << i;
		printf("%d << %d = %d \n", e, i, result);
	}

	for (i = 1; i <= 5; i++)
	{
		result = e >> i;
		printf("%d >> %d = %d \n", e, i, result);
	}
}




