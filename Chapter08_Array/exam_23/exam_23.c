// 예제모음23 문자열 내 특정 문자 변환

// 문자열을 입력받고 그 문자열에서 변환할 기존 문자와 새로운 문자를 각각 입력받은 뒤 변환된 문자열을 반환
// => 변환을 위해 입력받은 문자를 문자열을 탐색하면서 찾은 후, 새로운 문자로 변환

#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	char ch1, ch2;
	int i;

	printf("문자열을 입력하세요 : ");
	gets(s);

	printf("어떤 문자를 변환할까요? : ");
	//gets(ch1);							// gets()는 문자열을 입력받는 함수. 문자x, 문자열만o
	scanf(" %c", &ch1);						// 문자를 입력받기 위해 항상 SDL 검사를 꺼야하는걸까?

	printf("어떤 문자로 변환할까요? : ");
	//gets(ch2);
	scanf(" %c", &ch2);

	//for (i = 0; i < 100; i++)		// 항상 전체 메모리를 검색해야하기 때문에 비효율적
	for(i=0;i<strlen(s);i++)
	{
		if (s[i] == ch1)
			s[i] = ch2;
		else
			s[i] = s[i];
	}
	printf("선택한 문자를 변경한 문자열입니다. ==> %s \n", s);
}