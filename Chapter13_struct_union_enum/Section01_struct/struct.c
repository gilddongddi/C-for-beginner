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
//	struct student s = { "CM.Bae", 90, 95 };
//
//	printf("이름 : ");
//
//	printf("국어 점수 : ");
//
//	printf("영어 점수 : ");
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n---구조체 활용 ---\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("평균 점수 ==> %5.1f\n", s.avg);
//}




// 구조체 배열
// 
// 기본 13-4, 구조체 배열을 사용하지 않은 예 - 일반 배열
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char name[3][10];
//	int kor[3];
//	int eng[3];
//	float avg[3];
//
//	int i;
//
//	strcpy(name[0], "Kim");
//	kor[0] = 90;
//	eng[0] = 80;
//	avg[0] = (kor[0] + eng[0]) / 2.0f;
//
//	strcpy(name[1], "Lee");
//	kor[1] = 70;
//	eng[1] = 60;
//	avg[1] = (kor[1] + eng[1]) / 2.0f;
//
//	strcpy(name[2], "Park");
//	kor[2] = 50;
//	eng[2] = 40;
//	avg[2] = (kor[2] + eng[2]) / 2.0f;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("학생 이름 ==> %s\n", name[i]);
//		printf("국어 점수 ==> %d\n", kor[i]);
//		printf("영어 점수 ==> %d\n", eng[i]);
//		printf("평균 점수 ==> %5.1f\n", avg[i]);
//		printf("\n");
//	}
//}



// ===> 응용 13-5, 구조체 배열을 사용하여 변경
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s[3];*/
//
//	/*struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	}s[3];*/
//
//	typedef struct _student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	}student;
//
//	student s[3];
//
//	int i;
//
//	strcpy(s[0].name, "Kim");
//	s[0].kor = 90;
//	s[0].eng = 80;
//	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;
//
//	strcpy(s[1].name, "Lee");
//	s[1].kor = 70;
//	s[1].eng = 80;
//	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;
//
//	strcpy(s[2].name, "Park");
//	s[2].kor = 50;
//	s[2].eng = 40;
//	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;
//
//
//	printf("---구조체 배열 --\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("학생 이름 ==> %s\n", s[i].name);
//		printf("국어 점수 ==> %d\n", s[i].kor);
//		printf("영어 점수 ==> %d\n", s[i].eng);
//		printf("평균 점수 ==> %5.1f\n", s[i].avg);
//		printf("\n");
//	}
//}



// 기본13-6, 구조체 포인터 사용
#include<stdio.h>

int main()
{
	struct student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;
	struct student* p;		// 구조체 포인터 변수 p 선언

	p = &s;

	printf("이름 입력 : ");
	scanf("%s", p->name);			//name 자체가 주소이므로 &를 붙이지 않는다

	printf("국어 점수 : ");
	scanf("%d", &p->kor);			//연산자 우선순위가 ->가 &보다 높기 때문에 괄호를 안 붙여도 됨

	printf("엉어 점수 : ");
	scanf("%d", &p->eng);

	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n--구조체 포인터 활용 --\n");
	printf("학생 이름 ==> %s\n", p->name);
	printf("국어 점수 ==> %d\n", p->kor);
	printf("영어 점수 ==> %d\n", p->eng);
	printf("평균 점수 ==> %5.1f\n", p->avg);
}