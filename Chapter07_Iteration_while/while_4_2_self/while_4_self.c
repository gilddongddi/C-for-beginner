// self study: 응용 7-6 을 중첩 if문으로 바꾸기
#include<stdio.h>

int main(){

//do {
//	printf("\n손님 주문하시겠습니까?\n");
//	printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
//	scanf_s("%d", &menu);
//
//	switch (menu)
//	{
//	case 1: printf("#카페라떼 주문하셨습니다. \n"); break;
//	case 2: printf("#카푸치노 주문하셨습니다. \n"); break;
//	case 3: printf("#아메리카노 주문하셨습니다. \n"); break;
//	case 4: printf("#주문하신 커피 준비하겠습니다.\n"); break;
//	dedault: printf("잘못 주문하셨습니다. \n");
//	}
//} while (menu != 4);
int menu;
		
	printf("\n손님 주문하시겠습니까?\n");
	printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
	scanf_s("%d", &menu);

	if (menu == 1)
		printf("#카페라떼 주문하셨습니다. \n");
	else 
		if (menu == 2)
			printf("#카푸치노 주문하셨습니다. \n");
		else 
			if (menu == 3)
				printf("#아메리카노 주문하셨습니다. \n");
			else 
				if (menu = 4)
				{
					printf("#주문하신 커피 준비하겠습니다.\n"); 
					return;
				}
				else
					printf("잘못 주문하셨습니다. \n");
}