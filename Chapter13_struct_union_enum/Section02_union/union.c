// SECTION 02 공용체

// 하나의 공간(메모리)를 서로 다른 두 변수가 같이 사용한다.
// 구조체랑 형식은 같음. struct 대신 union 사용
// 다만 구조체는 멤버변수마다 메모리를 할당받는 것에 비해, 공용체는 멤버 변수간 메모리를 공유한다는 점
// 
// 
//기본 13-7
#include<stdio.h>
int main()
{
	union student {
		int tot;
		char grade;
	};
	union student u;

	u.tot = 300;
	u.grade = 'A';

	printf("\n--공용체 활용 --\n");
	printf("총점 ==> %d\n", u.tot);		//출력하면 300이 아닌 321이 나옴. 메모리를 공유하다보니 나중에 입력된 'A'가 300을 덮어씀
	printf("등급 ==> %c\n", u.grade);		

	printf("\n\n");

	printf("\n--공용체 활용 --\n");		//300이 덮어써지지 않고 출력되게 하려면 문장 위치를 적절히 조정해줘야 함.
	u.tot = 300;
	printf("총점 ==> %d\n", u.tot);		
	u.grade = 'A';
	printf("등급 ==> %c\n", u.grade);

}
