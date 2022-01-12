//기본 14-3 사용자 정의 헤더 파일 사용 예

#include<stdio.h>

#include"myHeader.h"	// 사용자가 만든 헤어 파일 포함


int main()
{
	func(10);			// 함수 호출
}

void func(int num)		// func() 함수의 내용을 정의한다. 
{
	printf("%d\n", num);
}