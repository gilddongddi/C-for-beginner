// ***동전 교환 프로그램***
// 
//입력된 액수만큼 500원, 100원, 50원, 10원짜리 동전으로 교환해주는 프로그램이다.
//조건1)동전의 총수를 최소화한다.
//조건2)고액의 동전을 먼저 바꿔준다.



#include<stdio.h>

int cash;
int n500, n100, n50, n10;
int charge;

int main()
{
	printf("***얼마를 교환하실건가요? ==> ");
	scanf("%d", &cash);


	n500 = cash / 500;
	charge = cash % 500;
	n100 = charge / 100;
	charge = charge % 100;
	n50 = charge / 50;
	charge = charge % 50;
	n10 = charge / 10;
	charge = charge % 10;

	printf("\n입금하신 금액 %d\n", cash);
	printf("500원 : %d 개\n", n500);
	printf("100원 : %d 개\n", n100);
	printf(" 50원 : %d 개\n", n50);
	printf(" 10원 : %d 개\n", n10);
	printf("거스름돈: %d 원\n", charge);



//#include<stdio.h>
//
//int cash;
//int c500 = 500; c100 = 100;  c50 = 50; c10 = 10;
//int n500, n100, n50, n10;
//int charge;
//
//int main()
//{
//	printf("얼마를 교환하실건가요? ==> ");
//	scanf("%d", &cash);
//
//
//	n500 = cash / c500;
//	charge = cash % c500;
//	n100 = charge / c100;
//	charge = charge % c100;
//	n50 = charge / c50;
//	charge = charge % c50;
//	n10 = charge / c10;
//	charge = charge % c10;
//
//	printf("\n입금하신 금액 %d\n", cash);
//	printf("500원 : %d 개\n", n500);
//	printf("100원 : %d 개\n", n100);
//	printf(" 50원 : %d 개\n", n50);
//	printf(" 10원 : %d 개\n", n10);
//	printf("거스름돈: %d", charge);
}