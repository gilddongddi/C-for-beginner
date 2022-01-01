// ***윤년 계산 프로그램 ***

// 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년이다.
// 400으로 나누어 떨어지는 해도 윤년에 포함된다.

#include<stdio.h>



int main()
{
	int year;

	printf("년도를 입력하세요 : ");
	scanf_s("%d", &year);

	if( ((year % 4 == 0) && (year % 100 != 0)) || (year%400 == 0) )
	{

	printf("\n %d 년은 윤년입니다.\n", year);
	}
	else
	{
	printf("\n %d 년은 윤년이 아닙니다.\n", year);
	}


}