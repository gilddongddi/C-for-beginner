// SECTION 03 2���� �迭

//�⺻ 8-14

#include<stdio.h>

int main()
{
	int aa[3][4];

	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;

	printf("aa[0][0]���� aa[2][3]���� ��� \n");

	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);




	//���� 8-15, for ���� ����� 2���� �迭 �����
	printf("\n");

	int bb[3][4];
	int i, k;

	int val = 1;  // �迭�� �� ���� �ʱ�ȭ

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			bb[i][k] = val;
			val++;
		}
	}

	printf("bb[0][0]���� bb[2][3]���� ��� \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", bb[i][k]);
		}
		printf("\n");
	}


	//self study
	printf("\n");

	int cc[3][4];
	int ii, kk;

	val = 1;

	for (ii = 0; ii < 3; ii++)
	{
		for (kk = 0; kk < 4; kk++)
		{
			cc[ii][kk] = val;
			val = val + 2;
		}

	}

	printf("cc[0][0]���� cc[2][3]���� ���\n");

	for (ii = 0; ii < 3; ii++)
	{
		for (kk = 0; kk < 4; kk++)
		{
			printf("%3d", cc[ii][kk]);
		}
		printf("\n");
	}
	printf("\n");

	printf("cc[2][3]���� cc[0][0]���� �ݴ�� ���\n");

	for (ii = 2; ii >= 0; ii--)
	{
		for (kk = 3; kk >= 0; kk--)
		{
			printf("%3d", cc[ii][kk]);
		}
		printf("\n");
	}
	

	// 2���� �迭�� �����ϴ� ���ÿ� �ʱ�ȭ
	printf("\n");

	int dd[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int I, K;
	printf("dd[0][0]���� dd[2][3]���� ��� \n");

	for (I = 0; I < 3; I++)
	{
		for (K = 0; K < 4; K++)
		{
			printf("%3d", dd[I][K]);
		}
		printf("\n");
	}

}