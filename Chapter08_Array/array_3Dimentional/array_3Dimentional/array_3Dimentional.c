// 3차원 이상의 배열

#include<stdio.h>

int main()
{
	int aa[2][3][4] =
	{
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		}
		,
		{
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
		}
	};

	printf("3차원 배열 출력\n");

	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for(k = 0; k < 4; k++)
			{
			printf("%3d", aa[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}