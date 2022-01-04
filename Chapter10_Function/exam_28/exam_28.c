// ex28 함수를 이용한 대소문자 변환 프로그램

#include<stdio.h>

char ch(aa)
{
	char a = 'a';
	char b = 'A';
	int diff = 'a' - 'A';
	
	if (('a' <= aa) && (aa >= 'z'))
		aa = aa - diff;
	else if (('A' <= aa) && (aa >= 'Z'))
		aa = aa + diff;
	else
		aa == aa;
}

void main()
{
	char s[100];
	int i;
	char t;

	printf("문자열을 입력하세요 : ");
	gets(s);

	printf("변경할 소문자 혹은 대문자를 입력하세요 : ");
	scanf("%c", &t);

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == t)
		{
			s[i] = ch(t);
		}
		
	}

	printf("변경된 문자열 ==> %s\n", s);
}