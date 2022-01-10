// SECTION 02 포인터 배열



// 기본 12-6 2차원 배열					// 문제점 : 100자를 채우지 못하면 메모리 낭비가 심함

/*#include<stdio.h>

int main()
{
	char data[3][100];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf(" %d 번째 문자열 : ", i + 1);
		gets(data[i]);
	}

	printf("\n -- 입력과 반대로 출력(이차원 배열) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf(" %d :%s\n", i + 1, data[i]);
	}
}		*/		



//응용 12-7 포인터 배열 활용
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//int main()
//{
//	char* p[3];
//	char imsi[100];    //입력값을 젖아할 임시 공간 배열
//	int i, size;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d 번째 문자열 : ", i + 1);
//		gets(imsi);
//
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);  //입력한 길이 +1 크기의 메모리 할당하고 char* 크기로 나눠서 p[i]에 대입
//		
//		strcpy(p[i], imsi);					// imsi에 저장한 입력문자열을 p[0],p[1],p[2]에 순서대로 대입
//	}
//
//	printf("\n-- 입력과 반대로 출력(포인터) --\n");
//	for (i = 2; i >= 0; i--)
//	{
//		printf(" %d :%s\n", i + 1, p[i]);
//	}
//
//	for (i = 0; i < 3; i++)
//		free(p[i]);
//}


//SELF STUDY 문자열 다섯줄 입력, 메모리를 0으로 초기화하는 calloc() 함수 이용해보기
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
	char* p[5];
	char imsi[100];
	int i, size;

	for (i = 0; i < 5; i++)
	{
		printf( "%d 번재 문자열 : ", i+1);
		gets(imsi);

		size = strlen(imsi);

		//p[i] = (char*)malloc((sizeof(char) * size) + 1);
		p[i] = (char*)calloc(sizeof(char), size+1);  // malloc()과의 차이 비교
		strcpy(p[i], imsi);
	}

	printf("\n --입력과 반대로 출력(포인터) --\n");
	for (i = 4; i >= 0; i--)
	{
		printf(" %d : %s\n", i + 1, p[i]);
	}

	for (i = 0; i < 5; i++)
		free(p[i]);
}
