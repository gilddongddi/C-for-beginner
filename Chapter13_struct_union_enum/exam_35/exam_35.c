// ex35, 구조체와 공용체의 홉합

// 사용자 이름을 입력하고 전화번호 또는 주민번호 중 한 가지만 입력하는 프로그램

#include<stdio.h>

int main()
{
	typedef struct _person {				//구조체형을 정의할 때 그 내부에 공용체를 사용한다.
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		}id;
	}person;

	person p1;

	printf("이름 ==> ");
	scanf("%s", p1.name);
	printf("전화번호 또는 주민번호==> ");
	scanf("%s", p1.id.jumin);

	printf("\n --구조체/공용체 혼합 활용 --\n");
	printf("이름 ==> %s\n", p1.name);
	printf("전화번호/주민번호 ==> %s\n", p1.id.phone);
}
 