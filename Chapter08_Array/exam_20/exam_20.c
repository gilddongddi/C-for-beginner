// 예제모음 20 문자열 배열을 이용해서 입력된 문자열을 반대 순서로 출력하는 프로그램

#include<stdio.h>

//int main()
//{
//
//	char s[100];
//	int i;
//
//	char t[100];
//
//	printf("문자열을 입력하세요 : ");
//	gets(s);
//
//	printf("\n");
//	//printf("%s\n", s);
//
//	for (i = 0; i < 100; i++)
//	{
//		
//		t[i] = s[sizeof(s) -1- i];
//		
//	}
//	t[sizeof(t)] = '\0';
//	printf("내용을 거꾸로 출력 : %s\n", t);
//}

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("문자열을 입력하세요 : ");
	//scanf("%s", ss);   // scanf_s는 문자열 출력이 안됨, scanf는 공백이 있으면 안됨. 
	gets(ss);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		//tt[i] = ss[count -1-i];
		tt[i] = ss[count - (1 + i)];
	}
	tt[count] = '\0';

	printf("내용을 거꾸로 출력 ==> %s\n", tt);
}

