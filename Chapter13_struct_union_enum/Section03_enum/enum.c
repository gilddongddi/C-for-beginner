// SECTION 03 ������

// ����ü, ����ü�� ������ ���
// ���ŵ� �� �ȿ����� ������ ������ �� ����
// Ȱ�뵵�� ���� ������ ������ ���α׷��ֿ��� ���� ���ϰ� ���ȴٰ� ��. ������ �ǹ̸� �� �� ����ϰ� ǥ��.


// �⺻ 13-8

//#include<stdio.h>
//
//int main()
//{
//	enum week { sun, mon, tue, wed, thu, fri, sat };	//  0~6������ ������ �������. 
//
//	enum week ww;		// ������ ���� ww ����
//
//	ww = tue;			// ���� ww�� sun~sat ���� ���� ����.
//
//	if (ww == sun)
//		printf("������ �Ͽ����Դϴ�. \n\n", ww);
//	else
//		printf("������ �Ͽ����� �ƴմϴ�. \n\n", ww);
//}




#include<stdio.h>

//int main()
//{
//	enum week { mon=1, tue, wed, thu, fri, sat, sun};	//  0~6������ ������ �������. 
//
//	enum week ww;		// ������ ���� ww ����
//
//	ww = tue;			// ���� ww�� sun~sat ���� ���� ����.
//
//	if (ww == sun)
//		printf("������ �Ͽ����Դϴ�. \n\n", ww);
//	else
//		printf("������ �Ͽ����� �ƴմϴ�. \n\n", ww);
//
//	printf("%d %d %d %d %d %d %d \n", mon, tue, wed, thu, fri, sat, sun);
//}

int main()
{
	enum week { mon = 2, tue, wed=21, thu, fri=210, sat, sun };	//  0~6������ ������ �������. 

	enum week ww;		// ������ ���� ww ����

	ww = tue;			// ���� ww�� sun~sat ���� ���� ����.

	if (ww == sun)
		printf("������ �Ͽ����Դϴ�. \n\n", ww);
	else
		printf("������ �Ͽ����� �ƴմϴ�. \n\n", ww);

	printf("%d %d %d %d %d %d %d \n", mon, tue, wed, thu, fri, sat, sun);
}