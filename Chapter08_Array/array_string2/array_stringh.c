// 문자열 함수로 문자열 다루기

// 문자열의 길이를 알려주는 함수: strlen() 

#include<stdio.h>
#include<string.h>

int main()
{
	char ss[] = "XYZ";
	int len;  //문자열의 길이를 저장할 변수

	len = strlen(ss);

	printf("문자열 \"%s\"의 길이 ==> %d\n", ss, len);  //  \" : 큰 따옴표를 출력하기 위해 사용

	// null을 제외한 길이가 출력됨 



	// 문자열을 복사하는 함수: strcpy()
	char tt[4];

	strcpy(tt, "XYZ");

	printf("문자열 tt의 내용 ==> %s \n", tt);


	// 두 문자열을 이어주는 함수: strcat()
	char aa[7] = "XYZ";

	strcat(aa, "ABC");

	printf("이어진 문자열 aa의 내용 ==> %s \n", aa);


	// 두 문자열을 비교하는 함수: strcmp()
	char bb[] = "XYZ";
	char cc[] = "xyz";
	int r;

	r = strcmp(bb, cc);  // 두 문자열이 같으면 0, 다르면 그 외의 숫자를 돌려줌, 두 문자열이 같은지 확인할 때 사용

	printf("두 문자열의 비교결과 ==> %d \n", r);



	//문자열 입출력 함수 gets(), pts()

	char dd[20];
	char ee[20];
	int r1, r2;

	puts("첫번째 문자열을 입력하세요.");
	gets(dd);

	puts("두번째 문자열을 입력하세요.");
	gets(ee);

	r1 = strlen(dd);
	r2 = strlen(ee);

	printf("첫번째 문자열의 길이 ==> %d \n", r1);
	printf("두번째 문자열의 길이 ==> %d \n", r2);

	if ((strcmp(dd, ee)) == 0)
		puts("두 문자열의 내용이 같습니다.\n");
	else
		puts("두 문자열의 내용이 다릅니다.\n");
}




