// SECTION 02 배열과 문자열
// 정수형 배열과 문자형 배열

// 기본 8-7 

#include<stdio.h>

//int main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//
//	printf("문자열 배열 ss==> %s\n", ss);
//}


// 응용 8-8

int main()
{
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		tt[i] = ss[3 - i];
	}
	tt[4] = '\0';

	printf("거꾸로 출력한 결과 ==> %s \n", tt);
}
