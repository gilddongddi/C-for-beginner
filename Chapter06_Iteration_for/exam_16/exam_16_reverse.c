//exam16, 입력된 문자를 반대 순서로 출력

#include<string.h>
#include<stdio.h>

int main()
{
	char str[100];
	int str_cnt;
	int i;

	printf("영문자 및 숫자를 입력(100자 이하) : ");
	scanf("%s", str);  //scanf_s("%s", str);  scanf_s로 출력하니 출력이 안되고 비정상종료됨. scanf로 바꾸었더니 해결. 
						//입력하는 문자 사이에 공백이 없어야 함
	

	printf("\n");
	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==>");

	str_cnt = strlen(str);

	for (i = str_cnt; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}