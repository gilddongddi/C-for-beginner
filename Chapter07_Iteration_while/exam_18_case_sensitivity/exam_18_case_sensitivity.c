//exam18: 입력된 문자열의 종류 구분

// 예제 설명 - 입력한 문자열에 대문자와 소문자.숫자가 각각 몇 개 입력되었는지 세는 프로그램이다.
// 그 외는 무시 한다.

#include<stdio.h>

int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("문자열을 입력(100자 이내) : ");
	scanf("%s", str);

	i = 0;
	do {
		ch = str[i];

		if (ch >= 'A' && ch <= 'Z')
			upper_cnt++;
		if (ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if (ch >= '0' && ch <= '9')
			digit_cnt++;

		i++;
	} while (ch != '\0');

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);



}