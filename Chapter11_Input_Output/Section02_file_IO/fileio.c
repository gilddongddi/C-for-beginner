// SECTION 02 파일 입출력 함수

// 파일을 이용한 입력
// 기본 11-7

//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data.txt", "r");
//
//	fgets(s, 20, rfp);			// fgets(문자배열, 읽을 최대 문자 수, 파일 포인터);  최대 19자를 읽어옴. 1자는 null문자
//
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//
//	fclose(rfp);
//}


// 응용 11-8 도스 명령어 type 구현   // 한줄마다 행 번호도 출력

//#include<stdio.h>
//
//void main()
//{
//	char str[200];		// 한번에 199자까지 저장
//	int i;
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");		//  디렉토리 구분은 \\ 두개 써야 함
//
//	for (i = 0; i < 200;i++)			//무한루프
//	{
//		str[i]= fgets(str, 200, rfp);						// fgets() 파일을 '한 줄씩' 읽어옴, 인덱스에도 한줄씩 저장!
//
//		if (feof(rfp))	//feof() 파일의 끝인지 학인하는 함수. f end of?
//			break;
//
//		printf("%d: %s\n", i+1, str);
//		//printf("%s", str);
//	}
//
//	fclose(rfp);
//
//	// 출력이 되는데, 인덱스에 해당하는 값이 깨진다. 왜 그럴까?
//}



// 기본 11-0 서식을 지정하여 파일 읽기 : fscanf()		fscanf(파일 포인터, "서식", 입력할 매개변수들~);

//#include<stdio.h>
//
//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;				// 읽어올 숫자 변수와 반복을 위한 첨자 변수
//
//	rfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data2.txt", "r");		//디렉토리간 구분은 \\ 두개씩
//
//	for (i = 0; i < 5; i++)		// data2.txt 파일에 데이터가 5줄 있어서
//	{
//		fscanf(rfp, "%d", &in);		// 한번에 한줄씩 읽기 때문에, 한줄 읽고 변수 in에 저장하고 그걸 hap에 더하고.. 반복
//		hap = hap + in;
//	}
//
//	printf("합계 ==> %d\n", hap);
//
//	fclose(rfp);
//}



// 기본 11-10 파일을 이용한 출력: fputs()

//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//	FILE* wfp;
//
//	//wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data3.txt", "w");		//w : write
//	wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data3.txt", "a");		//a : append
//
//
//	printf("문자열을 입력(최대 19자) :");
//	gets(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}



// 응용 11-11 도스 명령어 copy 구현
//#include<stdio.h>
//
//void main()
//{
//	char str[200];
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\data5.txt", "w");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//		fputs(str, wfp);
//	}
//
//	fclose(rfp);
//	fclose(wfp);
//}




// 기본 11-12 서식을 지정하여 파일 출력 : fprintf()

#include<stdio.h>

void main()
{
	FILE* wfp;
	int hap = 0;
	int in, i;

	wfp = fopen("C:\\users\\user\\documents\\c-for-beginner\\temp\\data7.txt", "w");

	for (i = 0; i < 5; i++)
	{
		printf(" 숫자 %d : ", i + 1);
		scanf_s("%d", &in);
		hap = hap + in;					// 숫자 5개를 입력받아서 더한 값을 hap에 저장

	}
	fprintf(wfp, "합계 ==> : %d\n", hap);	// hap의 값만 data7.txt 파일에 쓰기

	fclose(wfp);
}