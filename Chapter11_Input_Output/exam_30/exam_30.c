// ex30 구구단을 파일에 출력

#include<stdio.h>

int main()
{
	int i, k;
	FILE* wfp = fopen("c:\\users\\user\\documents\\c-for-beginner\\temp\\gugu.txt", "w");

	//wfp = 
	for (i = 2; i < 10; i++)
	{
		fprintf(wfp, "   #제%d단#  ", i);
	}
	fprintf(wfp, "\n\n");

	for(i=2;i<10;i++)
	{
		for (k = 1; k < 10; k++)
		{
			fprintf(wfp, "%2dx%2d= %2d  ", i, k, i * k);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}