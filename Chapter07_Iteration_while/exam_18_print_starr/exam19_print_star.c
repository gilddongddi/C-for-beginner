// exam19: 입력된 숫자만큼 별표 출력

//예제 설명 입력한 숫자만큼의 별 모양을 출력하는 프로그램이다.예를 들어 5914를 입력하면 각 줄에 별을
//5개, 9개, 1 개, 4개 출력한다.

#include<stdio.h>

int main()
{
	char str[100];
	char ch;

	int i, k;
	int star;

	printf("숫자를 여러 개 입력 : ");
	scanf("%s", str);

	i = 0;
	ch = str[i];
	while (ch != '\0') {
		star = (int)ch - 48;

		for (k = 0; k < star; k++)
			printf("*");

		printf("\n");
		i = i + 1;
		ch = str[i];
	}
}