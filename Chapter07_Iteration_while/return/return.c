// 현재 함수를 불렀던 곳으로 돌아가는 return문
// 기본 7-12
#include<stdio.h>

int main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		hap = hap + i;
	}
	printf("1부터 100까지의 합은 %d입니다.\n", hap);
	return 0;

	printf("프로그램의 끝입니다.\n"); //return문이 실행되면서 아래 반복문들을 쌩까고 main()함수 밖으로 나가븜
}