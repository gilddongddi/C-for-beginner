// 기본5-1,5-2, 5-3 기본 if문 사용 예


#include<stdio.h>

int main()
{
	printf("\n\n>> 기본 if문 사용 예\n");


	int a = 200;

	if (a < 100)
	
		printf("100보다 작군요.. \n");
		printf("거짓이므로 이 문장은 안보이겠죠?\n");
	
	printf("프로그램 끝!\n\n");  //블록{}을 감싸지 않으면 if 바로 아래 한 문장만 실행한다.


	

	if (a < 100)
	{
		printf("100보다 작군요.. \n");
		printf("거짓이므로 이 문장은 안보이겠죠?\n");
	}
	printf("프로그램 끝!\n");  //if문에서 두 문장 이상을 실행하고 싶다면 여러 개의 구문을 하나로 만드는 블록{}을 사용해야 함	




// 기본 5-4, if~else문 사용 예
	printf("\n\n>> if~else문 사용 예\n");

	if (a < 100)
		printf("100보다 작군요..\n");
	else
		printf("100보다 크군요..\n");



// 기본 5-5, 블록을 활용한 if~else문 사용 예
	printf("\n\n>> 블록을 활용한 if~else문 사용 예\n");

	if (a < 100)
	{
		printf("100보다 작군요..\n");
		printf("참이면 이 문장도 보이겠죠?\n");
	}
	else
	{
		printf("100보다 크군요..\n");
		printf("거짓이면 이 문장이 보이겠죠?\n");
	}
	printf("프로그램 끝!\n");


// 기본 5-6, 블록을 활용한 if~else문 사용 예2
	printf("\n\n>> 블록을 활용한 if~else문 사용 예2\n");

	//int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);
	
	if (a % 2 == 0)
	{
		printf("짝수를 입력했군요! \n");
	}
	else
	{
		printf("홀수를 입력했군요! \n");
	}

}