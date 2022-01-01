// exam17: 배수의 합계를 구하는 계산기

//예제 설명 - 입력한 두 수 사이의 합계를 구하되 원하는 배수를 선택하는 프로그램이다. 예를 들어 100~200
//중에서 4 배수의 합계를 구할 수 있다.

#include<stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("합계의 시작갑==> :");
	scanf_s("%d", &start);
	
	printf("합계의 끝값 ==> : ");
	scanf_s("%d", &end);

	printf("배수 선택 ==> : ");
	scanf_s("%d" ,&basu);

	i = start;
	while (i<=end)
	{
		if(i%basu==0)		
			hap = hap + i;

		i++;
		
	}
	printf("1~100까지 숫자중 %d의 배수의 합은 %d 입니다.\n", basu,hap);

}