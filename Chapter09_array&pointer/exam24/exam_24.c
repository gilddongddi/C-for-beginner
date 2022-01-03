// ex24 포인터를 이용해 문자열을 반대 순서로 출력

#include<stdio.h>
#include<string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("문자열을 입력하세요 :");
	gets(ss);

	p = ss;  // 배열 ss의 주소를 포인터 변수 p에 대입

	//count = strlen(ss);

	//printf("내용을 거꾸로 출력 ==> ");
	//for (i = 0; i < strlen(ss); i++)
	//{
	//	printf("%c", *(p + strlen(ss) - 1 - i));
	//}
	//printf("\n");


	count = strlen(ss);					// count 변수는 꼭 없어도 됨. strlen()를 직접 입력해서 실행할 수도 있음

	printf("내용을 거꾸로 출력 ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - 1 - i));  // 전체 문자열 길이에서 null값 1을 빼고 i=0 부터 빼서 인덱스값이 거꾸로 출력되게 함. -(i+1) 로도 표현.
	}
	printf("\n");
}