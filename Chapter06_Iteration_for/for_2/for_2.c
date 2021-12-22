
// 기본6-4 for 문 사용 예 1


#include<stdio.h>

int main()
{
	int i;

	for (i = 5; i > 0; i--)
	{
		printf("%d : 안녕하세요? 빙글빙글 for문을 공부중입니다. ^^\n", i);
	}

	printf("\n\n");

	// 기본6-5 for문 사용 예 2

	for (i = 1; i <= 5; i++)
	{
		printf("%d \n", i);
	}

	printf("\n\n");

	//self study
	for (i = 10; i <= 20; i++)
	{
		printf("%d \t", i);
	}


	// 기본 6-6 for문을 활용하지 않고 합계 구하기

	int hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	printf("\n\n1~10까지의 합 = %d\n", hap);

	// 기본 6-7 for문을 활용해 합계 구하기

	hap = 0;
	for (i = 1; i <= 10; i++)
	{
		hap += i;  
		// hap = hap + i;
	}
	printf("1~10까지의 합 = %d\n", hap);



	// self study

	hap = 0;
	for (i = 1; i <= 12345; i++)
	{
		hap += i;
	}
	printf("1~12345까지의 합 = %d\n", hap);
}

