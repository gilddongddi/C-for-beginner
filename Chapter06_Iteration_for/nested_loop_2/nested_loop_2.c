// 응용 6-14, 중첩 for문 사용 예2, 구구단

#include<stdio.h>

int main() {

	int a, b;

	for (a = 2; a <= 9; a++) {

		printf("%d단입니다\n\n", a);

		for (b = 1; b <= 9; b++) {

			printf("%d * %d = %d\n", a, b, a * b);

		}
	}
	printf("\n");

	// 응용 6-15, 중첩 for문 사용 예3, 구구단 가로출력
	int i, k;
	
	for(i=1; i <= 9; i++) {

		for (k = 2; k <= 9; k++) {
			printf("%2dx%2d=%2d ", k, i, k * i);
		}
		printf("\n");
	}
}