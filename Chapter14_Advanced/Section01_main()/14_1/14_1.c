// 기본 14-1, main() 함수에서의 매개변수 사용 예1

#include<stdio.h>

int main(int argc, char* argv[])							// 매개변수 지정
{
	int i;

	printf(" argc 매개변수 개수 ==> %d \n", argc-1);				// 매개변수의 개수 출력

	for (i = 1; i < argc; i++)								// 매개변수 개수만큼 반복하여 매개변수의 내용을 출력
		printf(" argv[%d] 매개변수 ==> %s \n", i, argv[i]);
}