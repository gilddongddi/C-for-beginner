// ÀÀ¿ë 5-10, switch~case¹® »ç¿ë ¿¹2

#include<stdio.h>

int main()
{
	int year;

	printf("Ãâ»ı³âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf_s("%d", &year);

	switch (year%12)
	{
	case 0: printf("¿ø¼şÀÌ¶ì\n"); break;
	case 1: printf("´ß¶ì\n"); break;
	case 2: printf("°³¶ì\n"); break;
	case 3: printf("µÅÁö¶ì\n"); break;
	case 4: printf("Áã¶ì\n"); break;
	case 5: printf("¼Ò¶ì\n"); break;
	case 6: printf("È£¶ûÀÌ¶ì\n"); break;
	case 7: printf("Åä³¢¶ì\n"); break;
	case 8: printf("¿ë¶ì\n"); break;
	case 9: printf("¹ì¶ì\n"); break;
	case 10: printf("¸»¶ì\n"); break;
	case 11: printf("¾ç¶ì\n"); break;
	}


	//self study: if~else ¹®À¸·Î ¼öÁ¤ÇØº¸±â

	if (year % 12 == 0)
		printf("¿ø¼şÀÌ¶ì\n");

	else if (year % 12 == 1)
		printf("´ß¶ì\n");

	else if (year % 12 == 2)
		printf("°³¶ì\n");

	else if (year % 12 == 3)
		printf("µÅÁö¶ì\n");

	else if (year % 12 == 4)
		printf("Áã¶ì\n");

	else if (year % 12 == 5)
		printf("¼Ò¶ì\n");

	else if (year % 12 == 6)
		printf("È£¶ûÀÌ¶ì\n");

	else if (year % 12 == 7)
		printf("Åä³¢¶ì\n");

	else if (year % 12 == 8)
		printf("¿ë¶ì\n");

	else if (year % 12 == 9)
		printf("¹ì¶ì\n");

	else if (year % 12 == 10)
		printf("¸»¶ì\n");

	else if (year % 12 == 11)
		printf("¾ç¶ì\n");


}