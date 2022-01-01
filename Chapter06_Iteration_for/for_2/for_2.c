
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



	// 기본 6-7, 6-8  for문을 활용해 합계 구하기

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

	printf("\n\n");


	// 응용6-9 for문을 활용하여 합계 구하기 3
	hap = 0;
	for (i = 501; i <= 1000; i+=2)			// i를 2씩 증가시키기 위해서는, i=i+2 or i += 2
	{
		/*hap = hap + i;*/
		hap += i;
	}
	printf("500~1000까지의 홀수의 합 : %d\n", hap);


	// self study
	hap = 0;
	for (i = 3; i <= 100; i=i+3)			
	{
		/*hap = hap + i;*/
		hap += i;
	}
	printf("1~100까지의 3의 배수의 합 : %d\n", hap);


	// 기본 6-10 사용자가 원하는 값을 입력하고 1부터 입력한 수까지 더하는 프로그램
	// 
	//hap = 0;
	//int num;

	//printf("값 입력: ");
	//scanf_s("%d", &num);

	//for (i = 0; i <= num; i++)
	//	hap += i;
	//printf("1~ %d가지 더한 값은 %d입니다. \n\n", num, hap);

	
	// 응용6-11 시작값, 최종값, 증가값까지 사용자가 입력하여 더하도록 하는 프로그램

	int a, b, c;
	hap = 0;
	printf("\n\n *** 시작값, 최종값, 증가값을 입력하세요:\n ");
	//scanf_s("%d %d %d", &a, &b, &c);

	printf("시작할 숫자 입력 : ");
	scanf_s("%d", &a);
	printf("마지막 숫자를 입력 : ");
	scanf_s("%d", &b);
	printf("원하는 증가값 입력 : ");
	scanf_s("%d", &c);

	for (i = a; i <= b; i = i + c)
		hap = hap + i;
	printf("%d부터 %d까지 %d씩 증가한 수의 합은 %d입니다\n\n\n", a, b, c, hap);


	//기본6-12 for문을 이용한 구구단 프로그램
	
	int dan;
	int result;

	printf("구구단 몇 단? : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++)
	{
		//result = dan * i;
		//printf("%d * %d = %d\n", dan, i, result);
		printf("%d * %d = %d \n", dan, i, dan * i);
	}

	//self study : 반대구구단
	printf("\n반대구구단\n");
	for (i = 9; i >=1; i--)
	{
		//result = dan * i;
		//printf("%d * %d = %d\n", dan, i, result);
		printf("%d * %d = %d \n", dan, i, dan * i);
	}

}

