// 예제모음 22: 구구단 결과를 2차원 배열에 저장한 후 출력

// 1x1 부터 9x9 까지 저장해야 하므로 9x9 배열로 저장

#include<stdio.h>

int main()
{
	int gugu[9][9];
	int i, k;

	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
			printf(" %2dx%2d =%2d ", k, i, k * i);
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
			printf(" %2dx%2d =%2d ", i, k, k * i);
		printf("\n");
	}

}