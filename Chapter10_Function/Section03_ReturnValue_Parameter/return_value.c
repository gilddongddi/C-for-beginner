// 기본 10-7, 반환값 유무에 따른 함수 비교

//#include<stdio.h>
//
//void func1()
//{
//	printf("void 형 함수는 돌려줄게 없음. \n");
//}
//
//int func2()
//{
//	return 100;
//}
//
//int main()
//{
//	int a, b;
//
//	func1();
//	//a = func1();   // void형식의 값을 int타입 변수에 대입할 수가 없음
//	
//	//char c = func1();  // void 형식을 값을 char타입 변수에도 대입할 수가 없음. 모든 형식에서 void를 사용할 수 없다고 나옴
//
//	b = func2();
//
//	printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
//	// printf("void 형 함수에서 돌려준 값 ==> %d\n", b);		// 따라서 이거는 불가능.
//}


// 매개변수 전달 방법

// 1. 값으로 전달

//#include<stdio.h>
//
//void func1(int a)
//{
//	a = a + 1;
//	printf("전달받은 a==> %d\n", a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(a);   //매개변수를 값(10)으로 전달
//	printf("func1() 실행 후의 a ==> %d\n", a);		//func1()함수 호출 후 원래의 a 값인 10이 출력. 값만 복사해갔을 뿐 원래 데이터값에는 영향을 미치지 않음
// 
//}

//2. 주소로 전달  기본10-9

//#include<stdio.h>
//
//void func1(int* a)
//{
//	*a = *a + 1;
//	printf("전달받은 a ==> %d\n", *a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(&a);			// 매개변수를 주소로 전달
//	printf("func1() 실행 후의 a ==> %d\n", a);		// func1()함수에서 전달받은 주소의 실제값을 변경시켜버려 11이 출력
//}



// 응용10-10, 매개변수 전달 방법 비교

#include<stdio.h>

void func1(char a, char b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;

}

void func2(char* a, char* b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void main()
{
	char x = 'A', y = 'Z';

	printf("원래 값  : x=%c, y=%c\n", x, y);

	func1(x, y);
	printf("값을 전달한 후 : x=%c, y=%c\n", x, y);

	func2(&x, &y);
	printf("주소를 전달한 후 : x=%c, y=%c\n", x, y);
}