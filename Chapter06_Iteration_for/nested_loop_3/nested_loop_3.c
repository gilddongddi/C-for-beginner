// SECTION 03 다양한 for문의 형태

//여러 개의 초깃값과 증감식을 사용하는 for문
// 
//기본 6-16
#include<stdio.h>
int main()
{
	int i, k;

	for (i = 1, k = 1; i <= 9; i++, k++)
		printf("%dx%d=%d \n", i, k, i * k);

	for (i = 2, k = 1; i <= 9; i++)
		printf("%dx%d=%d ", i, k, i * k);

	//초기값과 증감식이 없는 for 문
	printf("\n");

	int j;
	for (j = 0; j < 10; j++)
	{
		printf("%d  ", j);
	}
	printf("\n");

	j = 0;
	for (; j < 10; j++) {
		printf("%d  ", j);
	}
	printf("\n");

	j = 0;
	for (; j < 10;) {
		printf("%d  ", j);
		j++;
	}

	//self study
	printf("\n");

	int hap = 0;
	i = 1;
	for (; i <= 100; i++) {
		hap = hap + i;
	}
	printf("1부터 100까지의 합은 %d입니다.\n", hap);


	//기본 6-17, for(;;)의 의미, 무한루프
	i = 0;
	for (; ; )
	{
		printf("%d \n", i);
		i++;
	}
}
