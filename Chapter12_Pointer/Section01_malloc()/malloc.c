// SECTION 01 메모리 할당 함수


// 기본 12-1 포인터를 사용하여 정수 합계 구하기

//#include<stdio.h>
//
//int main()
//{
//	int aa[3];
//	int* p;
//	int i, hap = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d 번째 숫자 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < 3; i++)
//		hap = hap + *(p + i);
//
//	printf("입력 숫자의 합 => %d\n", hap);
//}




//기본 12-2 고정된 크기의 배열로 인한 메모리 낭비의 예

//#include<stdio.h>
//int main()
//{
//	int aa[10000];
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" 입력할 개수는 ? ");
//	scanf("%d", &cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%d 번째 숫자 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//
//	printf("입력 숫자의 합 ==> %d\n", hap);
//}


// malloc() 함수 사용형식 :  포인터 변수 = (포인터 변수의 데이터타입*) malloc(포인터 변수의 데이터형 크기 x 필요한 크기)

//응용 12-3 
//#include<stdio.h>
//#include<malloc.h>  //메모리 관련 함수를 사용할 때 추가
//
//int main() {
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" 입력할 개수는 ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(4 * cnt);					// 입력할 데이터 개수만큼 메모리 할당하고 시작 주소를 포인터 변수 p에 대입
//	//p=(int*)malloc(sizeof(int)*cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d 번째 숫자 : ", i + 1);
//		scanf("%d", p + i);   //  &p[i]도 가능 , 데이터가 저장될 주소를 써야 하므로, *(p+i) 는 안됨.   
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//	printf("입력 숫자 합 ==> %d\n", hap);
//
//	free(p);									//메모리 해제
//}




//self study 정수가 아닌 실수로 풀어보기
// 
//#include<stdio.h>
//#include<malloc.h>  //메모리 관련 함수를 사용할 때 추가
//
//int main() {
//	float* p;						// 포인터 변수의 데이터 타입은 실제값의 데이터타입을 써야한다. 
//	int i;
//	int cnt;
//	float hap = 0;
//
//	printf(" 입력할 개수는 ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(4 * cnt);					// 입력할 데이터 개수만큼 메모리 할당하고 시작 주소를 포인터 변수 p에 대입
//	//p=(int*)malloc(sizeof(int)*cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d 번째 숫자 : ", i + 1);
//		scanf("%f", p + i);   //  &p[i]도 가능 , 데이터가 저장될 주소를 써야 하므로, *(p+i) 는 안됨.   
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//	printf("입력 숫자 합 ==> %f\n", hap);
//
//	free(p);									//메모리 해제
//}


// 기본 12-4 calloc() : 처음부터 0으로 초기화된 메모리 확보하고 싶을 때. clear allocate

//#include<stdio.h>
//#include<malloc.h>
//
//int main()
//{
//	int* p, * s;
//	int i, j;
//
//	printf("malloc() 함수 사용 \n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++)
//		printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);			// 쓰레기값이 저장되어 있음
//
//	free(p);
//
//	printf("\ncalloc() 함수 사용\n");
//	s = (int*)calloc(sizeof(int), 3);					//malloc()과 사용법이 다름. 데이터타입크기와 개수를 매개변수로 사용함
//
//	for (j = 0; j < 3; j++)
//		printf("할당된 곳의 초기값 s[%d]==>%d\n", j, s[j]);				// 초기값이 모두 0
//
//	free(s);
//}





// 응용 12-5, realloc() 함수, re-allocate
#include<stdio.h>
#include<malloc.h>

int main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;								// 숫자를 몇 개 입력했는지 세는 변수
	int data;									// 입력한 숫자를 임시로 저장하는 변수

	p = (int*)malloc(sizeof(int) * 1);			// 1번째 숫자를 위한 메모리를 할당하고 주소를 포인터 변수 p에 대입
	printf(" 1 번째 숫자 : ");
	scanf("%d", &p[0]);
	cnt++;

	for (i = 2; ; i++)
	{
		printf(" %d 번째 숫자 : ", i);			// 2번째 숫자부터 입력받아 data 변수에 저장하고, 입력값이 0이 아니면 메모리 사이즈를 숫자개수만큼 늘려감
		scanf("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;						// data 값을 p[1]부터 0을 입력하기 전까지 차근차근 대입
		cnt++;
	}

	for (i = 0; i < cnt; i++)					// 대입된 데이터 값을 p[0]부터 p[cnt-1]까지 합산
		hap = hap + p[i];

	printf("입력 숫자 합 ==> %d\n", hap);

	free(p);									// 작업을 끝낸 후 메모리 반환
}
