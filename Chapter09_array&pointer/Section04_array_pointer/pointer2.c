//SECTION 04 배열과 포인터의 관계

#include<stdio.h>

// 기본 9-8
// 
//int main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] ==> %s \n", &s[3]);
//	printf("p+3 ==> %s \n\n", p + 3);
//
//	printf("&s[3] ==> %d \n", &s[3]);
//	printf("p+3 ==> %d \n\n", p + 3);
//
//	printf("%s\n", s);
//	printf("%d\n\n", s);
//
//	printf("s[3] ==> %c\n", s[3]);
//	printf("*(p+3) ==> %c\n", *(p + 3));
//	printf("*(s+3) ==> %c\n\n", *(s + 3));
//
//	printf("s[3] ==> %d\n", s[3]);
//	printf("*(p+3) ==> %d\n", *(p + 3));
//	printf("*(s+3) ==> %d\n", *(s + 3));
//}


// 응용9-9
int main()
{
	char s[8] = "Basic-C";
	char* p;
	int i;

	p = s;
	
	for (i = sizeof(s) - 2; i >= 0; i--)  // 8-2=6
		printf("%c", *(p + i));

	printf("\n");

	//self study
	char t[12] = "IT CookBook";
	char* q;
	int j;

	q = t;
	for (j = sizeof(t) - 2; j >= 0; j--)
		printf("%c", *(q + j));

	printf("\n");
}