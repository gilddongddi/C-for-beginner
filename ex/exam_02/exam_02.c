// if¹®À¸·Î µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼À Áß ÇÏ³ª¸¦ ¼±ÅÃÇÏ¿© °è»êÇÏ´Â ÇÁ·Î±×·¥

#include<stdio.h>

int main()
{
	int a, b;
	int c;
	int result;

	printf("Ã¹ ¹øÂ° °è»êÇÒ °ª ÀÔ·Â: ");
	scanf("%d", &a);

	printf("<1>µ¡¼À <2>»¬¼À <3>°ö¼À <4>³ª´°¼À : ");
	scanf("%d", &c);

	printf("µÎ ¹øÂ° °è»êÇÒ °ª ÀÔ·Â: ");
	scanf("%d", &b);

	
	if (c == 1)
	{
		result = a + b;
		printf("%d + %d = %d", a, b, result);
	}
	if (c == 2)
	{
		result = a - b;
		printf("%d - %d = %d", a, b, result);
	}
	if (c == 3)
	{
		result = a * b;
		printf("%d * %d = %d", a, b, result);
	}
	if (c == 4)
	{
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}
	
}
