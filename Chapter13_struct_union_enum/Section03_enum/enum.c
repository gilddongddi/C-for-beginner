// SECTION 03 열거형

// 구조체, 공용체와 형식은 비슷
// 열거된 값 안에서만 변수에 대입할 수 있음
// 활용도는 높지 않지만 복잡한 프로그래밍에서 가끔 편리하게 사용된다고 함. 변수의 의미를 좀 더 명료하게 표현.


// 기본 13-8

//#include<stdio.h>
//
//int main()
//{
//	enum week { sun, mon, tue, wed, thu, fri, sat };	//  0~6까지의 열거형 멤버변수. 
//
//	enum week ww;		// 열거형 변수 ww 선언
//
//	ww = tue;			// 변수 ww에 sun~sat 까지 대입 가능.
//
//	if (ww == sun)
//		printf("오늘은 일요일입니다. \n\n", ww);
//	else
//		printf("오늘은 일요일이 아닙니다. \n\n", ww);
//}




#include<stdio.h>

//int main()
//{
//	enum week { mon=1, tue, wed, thu, fri, sat, sun};	//  0~6까지의 열거형 멤버변수. 
//
//	enum week ww;		// 열거형 변수 ww 선언
//
//	ww = tue;			// 변수 ww에 sun~sat 까지 대입 가능.
//
//	if (ww == sun)
//		printf("오늘은 일요일입니다. \n\n", ww);
//	else
//		printf("오늘은 일요일이 아닙니다. \n\n", ww);
//
//	printf("%d %d %d %d %d %d %d \n", mon, tue, wed, thu, fri, sat, sun);
//}

int main()
{
	enum week { mon = 2, tue, wed=21, thu, fri=210, sat, sun };	//  0~6까지의 열거형 멤버변수. 

	enum week ww;		// 열거형 변수 ww 선언

	ww = tue;			// 변수 ww에 sun~sat 까지 대입 가능.

	if (ww == sun)
		printf("오늘은 일요일입니다. \n\n", ww);
	else
		printf("오늘은 일요일이 아닙니다. \n\n", ww);

	printf("%d %d %d %d %d %d %d \n", mon, tue, wed, thu, fri, sat, sun);
}