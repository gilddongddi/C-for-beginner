// SECTION 01 ����ü


// �⺻ 13-1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};					//����ü bibim ����, ���� ���� ������ ����
//
//	struct bibim b1;	//����ü ���� b1 ����. ���� ���� ������ Ȯ����
//
//	b1.a = 10;			//����ü ������ ��� ������ ���� ����
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf(" b1.a ==> %d \n", b1.a);
//	printf(" b1.b ==> %f \n", b1.b);
//	printf(" b1.c ==> %c \n", b1.c);
//	printf(" b1.d ==> %s \n", b1.d);
//}



// �⺻ 13-2  :  ����ü�� ������� ���� ���
//#include<stdio.h>
//
//int main()
//{
//	char name[10];
//	int kor;
//	int eng;
//	float avg;
//
//	printf("�̸� : ");
//	scanf("%s", name, 9);
//	
//	printf("���� ���� : ");
//	scanf("%d", &kor);
//
//	printf("���� ���� : ");
//	scanf("%d", &eng);
//
//	avg = (kor + eng) / 2.0f;
//
//	printf("\n");
//	printf("�л� �̸� ==> %s\n", name);
//	printf("���� ���� ==> %d\n", kor);
//	printf("���� ���� ==> %d\n", eng);
//	printf("��� ���� ==> %5.1f\n", avg);
//}


// �⺻ 13-3 : ����ü�� ����� ����
//#include<stdio.h>
//
//int main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//
//	printf("�̸� : ");
//	scanf("%s", s.name, 9);
//
//	printf("���� ���� : ");
//	scanf("%d", &s.kor);
//
//	printf("���� ���� : ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n---����ü Ȱ�� ---\n");
//	printf("�л� �̸� ==> %s\n", s.name);
//	printf("���� ���� ==> %d\n", s.eng);
//	printf("���� ���� ==> %d\n", s.kor);
//	printf("��� ���� ==> %5.1f\n", s.avg);
//}


// SELF STUDY : ����ü�� �ʱ갪 �����ϴ� ���
//#include<stdio.h>
//
//int main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s = { "CM.Bae", 90, 95 };
//
//	printf("�̸� : ");
//
//	printf("���� ���� : ");
//
//	printf("���� ���� : ");
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n---����ü Ȱ�� ---\n");
//	printf("�л� �̸� ==> %s\n", s.name);
//	printf("���� ���� ==> %d\n", s.eng);
//	printf("���� ���� ==> %d\n", s.kor);
//	printf("��� ���� ==> %5.1f\n", s.avg);
//}




// ����ü �迭
// 
// �⺻ 13-4, ����ü �迭�� ������� ���� �� - �Ϲ� �迭
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char name[3][10];
//	int kor[3];
//	int eng[3];
//	float avg[3];
//
//	int i;
//
//	strcpy(name[0], "Kim");
//	kor[0] = 90;
//	eng[0] = 80;
//	avg[0] = (kor[0] + eng[0]) / 2.0f;
//
//	strcpy(name[1], "Lee");
//	kor[1] = 70;
//	eng[1] = 60;
//	avg[1] = (kor[1] + eng[1]) / 2.0f;
//
//	strcpy(name[2], "Park");
//	kor[2] = 50;
//	eng[2] = 40;
//	avg[2] = (kor[2] + eng[2]) / 2.0f;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("�л� �̸� ==> %s\n", name[i]);
//		printf("���� ���� ==> %d\n", kor[i]);
//		printf("���� ���� ==> %d\n", eng[i]);
//		printf("��� ���� ==> %5.1f\n", avg[i]);
//		printf("\n");
//	}
//}



// ===> ���� 13-5, ����ü �迭�� ����Ͽ� ����
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s[3];*/
//
//	/*struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	}s[3];*/
//
//	typedef struct _student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	}student;
//
//	student s[3];
//
//	int i;
//
//	strcpy(s[0].name, "Kim");
//	s[0].kor = 90;
//	s[0].eng = 80;
//	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;
//
//	strcpy(s[1].name, "Lee");
//	s[1].kor = 70;
//	s[1].eng = 80;
//	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;
//
//	strcpy(s[2].name, "Park");
//	s[2].kor = 50;
//	s[2].eng = 40;
//	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;
//
//
//	printf("---����ü �迭 --\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("�л� �̸� ==> %s\n", s[i].name);
//		printf("���� ���� ==> %d\n", s[i].kor);
//		printf("���� ���� ==> %d\n", s[i].eng);
//		printf("��� ���� ==> %5.1f\n", s[i].avg);
//		printf("\n");
//	}
//}



// �⺻13-6, ����ü ������ ���
#include<stdio.h>

int main()
{
	struct student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;
	struct student* p;		// ����ü ������ ���� p ����

	p = &s;

	printf("�̸� �Է� : ");
	scanf("%s", p->name);			//name ��ü�� �ּ��̹Ƿ� &�� ������ �ʴ´�

	printf("���� ���� : ");
	scanf("%d", &p->kor);			//������ �켱������ ->�� &���� ���� ������ ��ȣ�� �� �ٿ��� ��

	printf("���� ���� : ");
	scanf("%d", &p->eng);

	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n--����ü ������ Ȱ�� --\n");
	printf("�л� �̸� ==> %s\n", p->name);
	printf("���� ���� ==> %d\n", p->kor);
	printf("���� ���� ==> %d\n", p->eng);
	printf("��� ���� ==> %5.1f\n", p->avg);
}