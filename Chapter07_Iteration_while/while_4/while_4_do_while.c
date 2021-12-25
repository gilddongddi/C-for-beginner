// SECTION 02 : do~ while 문, 어떠한 경우에도 한 번은 무조건 실행 <- 반복문이 위쪽에 있음

// 기본 7-5
#include<stdio.h>

int main()
{
	int a = 100;
	//int a = 200;

	while (a == 200)
	{
		printf("while문 내부에 들어 왔습니다.\n");
	}

	do {
		printf("do~while문 내부에 들어 왔습니다.\n");
	} while (a == 200);


	// 응용 7-6
	int menu;

	do {
		printf("\n손님 주문하시겠습니까?\n");
		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
		scanf_s("%d", &menu);

		switch (menu)
		{
		case 1: printf("#카페라떼 주문하셨습니다. \n"); break;
		case 2: printf("#카푸치노 주문하셨습니다. \n"); break;
		case 3: printf("#아메리카노 주문하셨습니다. \n"); break;
		case 4: printf("#주문하신 커피 준비하겠습니다.\n"); break;
		dedault: printf("잘못 주문하셨습니다. \n");
		}
	} while (menu != 4);
}