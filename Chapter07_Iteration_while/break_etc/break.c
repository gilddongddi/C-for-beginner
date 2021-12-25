//반복문을 탈출하는 break문

//기본 7-7
#include<stdio.h>

int main()
{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("for문을 %d회 실행했습니다.\n", i);
//		break;
//	}
//	printf("for문을 종료했습니다.\n\n");


	//기본 7-8
	//int a, b;

	//while (1)
	//{
	//	printf("더할 두 수 입력(멈추려면 0 0을 입력) :");
	//	scanf_s("%d %d", &a, &b);

	//	if (a == 0)
	//		break;
	//	
	//	printf("%d + %d = %d \n", a, b, a + b);
	//}

	//printf("0을 입력해서 for문을 탈출했습니다. \n");

	//응용 7-9  1+2+3+4+...+네모=1000 이상'에서 네모에 들어갈 수 알아내기
	//int i;
	//int hap = 0;
	//for (i = 1; i <= 1000; i++)
	//{
	//	hap = hap + i;
	//	printf("%d = %d + %d\n", hap,hap-i, i);

	//	if (hap >= 1000)
	//		break;
		
		
	//}
	//printf("네모에 들어갈 수는 %d입니다. \n",i);

	int hap = 0;
	int i = 1;
	while(1)
	{
		hap = hap + i;
		printf("%5d = %5d + %2d\n", hap, hap - i, i);

		if (hap >= 1000)
			break;
		i = i + 1;

	}
	printf("네모에 들어갈 수는 %d입니다. \n", i);
}
