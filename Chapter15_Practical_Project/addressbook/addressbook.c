// SECTIO 01 친구 핸펀 Ver 2.0 // self

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void view_juso()
void add_juso()
void delete_juso()


int select;
char name[50];

int main()
{
	printf("****연락처 프로그램****");
	printf("\n 메뉴를 선택하세요. \n");
	printf("<1>연락처 출력 <2> 연락처 등록 <3> 연락처 삭제 <4>끝내기 : ");
	scanf("%d", &select);

	while (select != 4)
	{
		switch (select)
		{
		case 1: view_juso(); break;
		case 2:	add_juso(); break;
		case 3:	delete_juso(); break;
		case 4: break;

		default: printf("잘못 입력했습니다. \n");
		}
	}

}


void view_juso()
{
	FILE* rfp;
	rfp = fopen("c:\\users\\user\\c_for_begenner\\chapter15_practical_project\\addressbook\\juso.txt", "r");
	for (;;)
	{
		fputs(rfp);
		if (feof(rfp))
			break;

	}

}

void add_juso()
{
	char str[100];
	FILE* wfp;
	wfp = fopen("c:\\users\\user\\c_for_begenner\\chapter15_practical_project\\addressbook\\juso.txt", "a");

	printf(" 이름 : ");
	fgets(str);

	printf(" 전화번호 : ");
	fgets();

	printf(" 이메일 : ");
	fgets();

	printf("\n%s\n", str);


}

void delete_juso()
{
	printf("\n삭제할 이름을 검색하세요 : ");
	scanf("%s", &name);
	for (i = 0; i < strlen(str)); i++)
	{
	if(str[i]==name)
}
}