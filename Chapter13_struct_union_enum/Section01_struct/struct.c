// SECTION 01 구조체


// 기본 13-1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};					//구조체 bibim 선언, 아직 저장 공간이 없음
//
//	struct bibim b1;	//구조체 변수 b1 선언. 실제 저장 공간을 확보함
//
//	b1.a = 10;			//구조체 변수의 멤버 변수에 값을 대입
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf(" b1.a ==> %d \n", b1.a);
//	printf(" b1.b ==> %f \n", b1.b);
//	printf(" b1.c ==> %c \n", b1.c);
//	printf(" b1.d ==> %s \n", b1.d);
//}



// 기본 13-2  :  구조체를 사용하지 않은 경우
//#include<stdio.h>
//
//int main()
//{
//	char name[10];
//	int kor;
//	int eng;
//	float avg;
//
//	printf("이름 : ");
//	scanf("%s", name, 9);
//	
//	printf("국어 점수 : ");
//	scanf("%d", &kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &eng);
//
//	avg = (kor + eng) / 2.0f;
//
//	printf("\n");
//	printf("학생 이름 ==> %s\n", name);
//	printf("국어 점수 ==> %d\n", kor);
//	printf("영어 점수 ==> %d\n", eng);
//	printf("평균 점수 ==> %5.1f\n", avg);
//}


// 기본 13-3 : 구조체를 사용해 변경
//#include<stdio.h>
//
//int main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//
//	printf("이름 : ");
//	scanf("%s", s.name, 9);
//
//	printf("국어 점수 : ");
//	scanf("%d", &s.kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n---구조체 활용 ---\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("평균 점수 ==> %5.1f\n", s.avg);
//}


// SELF STUDY : 구조체에 초깃값 대입하는 방식
#include<stdio.h>

int main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s = { "CM.Bae", 90, 95 };

	printf("이름 : ");

	printf("국어 점수 : ");

	printf("영어 점수 : ");

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n---구조체 활용 ---\n");
	printf("학생 이름 ==> %s\n", s.name);
	printf("영어 점수 ==> %d\n", s.eng);
	printf("국어 점수 ==> %d\n", s.kor);
	printf("평균 점수 ==> %5.1f\n", s.avg);
}


