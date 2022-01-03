// 예제모음21 대문자와 소문자 변환

//아스키코드상 대문자와 소문자와의 값의 차이를 더하고 빼는 방법으로 구현

#include<stdio.h>
#include<string.h>

int main()
{

	//printf("%d %d", 'a', 'A'); // 'a'= 97, 'A'= 65 

	char in[50], out[50];
	int i, len;
	int diff = 'a' - 'A'; 

	printf("문자 입력 : ");
	gets(in);

	len = strlen(in);  // 입력받은 문자열의 길이

	for (i = 0; i < len; i++)   // 문자열을 순회하면서 대문자이면 소문자와이 차이값을 더하고, 소문자이면 차이값을 빼줌
	{
		if((in[i]>='A') && (in[i]<='Z'))
			out[i] = in[i]+diff;

		else if((in[i]>='a') && (in[i]<='z'))
			out[i] = in[i]-diff;

		else
			out[i] = in[i];
	}
	out[i] = '\0';

	printf(" 변환된 문자 => %s \n", out);
}