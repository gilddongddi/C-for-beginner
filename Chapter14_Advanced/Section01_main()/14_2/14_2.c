// 응용 14_2, main() 함수에서의 매개변수 사용 예2

#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[200];
	FILE* rfp;

	if (argc != 2)
	{
		printf("\n -- 매개변수를 1개 사용하세요 -- \n");
		return 0;
	}

	rfp = fopen(argv[1], "r");			// 첫 번째 매개변수로 넘어온 것을 읽기 모드로 연다.

	for (;;)
	{
		fgets(str, 199, rfp);			// 파일의 내용을 한 줄 읽어들인다.

		if (feof(rfp))
			break;						// 파일의 끝이면 무한 루프를 종료

		printf("%s", str);				// 읽을 내용을 출력
	}

	fclose(rfp);				
}