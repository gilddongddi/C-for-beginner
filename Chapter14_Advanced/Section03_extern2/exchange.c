// 기본 14-7 extern 예약어 사용 예1
//extern int a, b;	// 변수 a,b를 외부 변수로 선언
int a, b;

void exchange()
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;		// a, b 두 값을 교환. 다른 소스(main.c)에서 선언되고 입력된 두 변수의 값을 여기서 바꿨음. 또한 돌려주는 값도 없다(?)
					// 즉, 변수 a,b는 main.c 와 exchange.c 파일에서 모두 사용할 수 있다... 음..
					// 그런데 여기서도 extern 예약어를 사용하지 않고 a,b를 그냥 선언해도 결과는 같다. 뭐가 다른걸까..
}
