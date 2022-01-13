// ex37: 텍스트 파일 복사

// 도스 명령어 중 copy 명령어와 동일하게 텍스트 파일을 복사하는 프로그램.

#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[200];				// 한 행을 최대 199자로 제한
	FILE* rfp;					
	FILE* wfp;					// 읽기용 & 쓰기용 포인터 변수 선언

	if (argc != 3)
	{
		printf("\n -- 매개변수를 2개 사용하세요 --\n");
		return 0;
	}

	rfp = fopen(argv[1], "r");		// 읽기 모드의 파일을 열어서 주소를 rfp에 대입
	wfp = fopen(argv[2], "w");		// 쓰기 모드의 파일을 열어서 주소를 wfp에 대입

	for (;;)
	{
		fgets(str, 199, rfp);		// 원본파일에서 한 행을 읽어옴

		if (feof(rfp))
			break;

		fputs(str, wfp);			// 읽은 행을 대상 파일에 씀
	}

	fclose(rfp);
	fclose(wfp);
}