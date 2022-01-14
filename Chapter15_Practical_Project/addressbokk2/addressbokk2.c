// 연락처 프로그램

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//연락처 구조체 정의
struct address {
	char name[30];
	char age[5];
	char phone[15];
};

void print_menu();
void view_juso();
void add_juso();
void delete_juso();

//연락처 파일명을 전역변수로 고정.
const char* fname = "D:\\Documents\\c_for_Beginner\\temp\\juso.txt";


int main()
{
	char select = 0;
	puts(" \n### 친구 핸펀 Ver 2.0 ### \n");

	while (select != 4)
	{
		print_menu();
		select = getche();				// getch() : 문자 하나, 모니터에 표시
		getchar();						// getchar() : 엔터칠 때까지 입력한 데이터를 메모리(버퍼)에 저장, 한문자만 꺼냄
		switch (select)
		{
		case'1': view_juso();
			break;
		case'2': add_juso();
			break;
		case'3': delete_juso();
			break;
		case'4': return 0;
			break;
		default: printf("\n잘못 입력했어요. 다시 선택하세요.\n");
		}
	}

	return 0;							// 함수를 호출한 곳으로 돌아감.  main()함수는 어디서 호출했지?
}

// 최초 사용자의 선택을 위한 메뉴를 출력
void print_menu()
{
	printf("\n");
	printf("1. 연락처 출력 \n");
	printf("2. 연락처 등록 \n");
	printf("3. 연락처 삭제 \n");
	printf("4. 끝내기 \n");
}

// 연락처 파일에서 기존에 입력된 내용을 읽어서 출력
void view_juso()
{
	char str[200] = "";				// 문자형 배열 str 만들고 내용을 공백으로 초기화
	FILE* rfp, * wfp;				// 파일 포인터 변수 rfp, wfp 선언
	int i;							// 첨자 변수 선언

	rfp = fopen(fname, "r");		// fname 포인터 변수에 대입된 juso.txt 파일을 읽어서 rfp 에 대입

// 만약 연락처 파일이 없다면 빈 파일을 만듦
	if (rfp == NULL)
	{
		wfp = fopen(fname, "w");
		fclose(wfp);
		rfp = fopen(fname, "r");
	}

	//기존의 연락처를 모두 읽어서 출력
	for (i = 0;; i++)	// 1씩 증가하는 무한루프
	{
		fgets(str, 200, rfp);		// rfp에서 한줄 읽어와서 str에 저장

		if (feof(rfp))
			break;

		printf("%d: %s", i, str);		// 읽어서 str에 저장된 데이터를 화면에 출력(한줄)

	}

	//i 가 1이면 실제 파일에는 내용이 없음
	if (i == 1)
		puts("\n ** 연락처 파일에 전화번호가 하나도 없어요. ** \n");

	fclose(rfp);
}

// 연락처 추가
void add_juso()
{
	struct address adr = { "", "", "" };	// 구조체 변수 선언하고 공백으로 초기화
	char wstr[200] = "";					// 문자형 배열 wstr 선언하고 공백으로 초기화
	FILE* wfp;

	wfp = fopen(fname, "a");				// fname에 대입된 파일을 삽입모드로 열어서 파일포인터 변수 wfp에 대입

	printf("이름을 입력 ==> : ");
	gets(adr.name);							// 이름을 입력받아 구조체 변수 adr의 멤버변수인 name에 대입
	printf("나이를 입력 ==> : ");
	gets(adr.age);
	printf("전화번호를 입력 ==> : ");
	gets(adr.phone);

	// 입력된 3개의 값을 하나의 문자열로 만든다
	strcat(wstr, adr.name);
	strcat(wstr, "\t");
	strcat(wstr, adr.age);
	strcat(wstr, "\t");
	strcat(wstr, adr.phone);
	strcat(wstr, "\n");

	fputs(wstr, wfp);						// 하나의 문자열로 만들어진 wstr에 저장된 데이터를 wfp에 대입된 파일에 씀
	fclose(wfp);
}

// 연락처 파일에서 선택한 연락처를 제거
void delete_juso()
{
	char read_str[50][200] = { "", };		// 연락처 파일의 내용 전체를 저장하기 위한 2차원 배열 선언하고 공백으로 초기화

	char str[200] = "";						// 문자형 배열 str 선언하고 공백으로 초기화
	FILE* rfp, * wfp;
	int del_line, i, count = 0;

	rfp = fopen(fname, "r");

	// 연락처 파일이 없으면 호출한 곳으로 돌아감
	if (rfp == NULL)
	{
		puts("\n!! 연락처 파일이 없습니다. !!\n");
		return;
	}

	printf("\n삭제할 행 번호는 ? ");
	scanf("%d", &del_line);

	for (i = 0; i < 50; i++)
	{
		strcpy(str, "");					// str 배열을 공백으로 만들고
		fgets(str, 200, rfp);				// rfp 에서 데이터를 가져다가 str 배열에 복사

		if (i + 1 != del_line)				// 삭제하는 행이 아니라면
		{
			strcpy(read_str[i], str);		// str 배열에 복사한 문자열을 read_str[i]에 복사
			count++;							// 50행 반복
		}
		else
			printf("%d 행이 삭제되었습니다. \n", del_line);

		if (feof(rfp))
			break;
	}
	
	fclose(rfp);

	// 파일을 쓰기 모드로 열고 새로운 내용을 씀
	wfp = fopen(fname, "w");

	for (i = 0; i < count; i++)
		fputs(read_str[i], wfp);
	fclose(wfp);
	


}


