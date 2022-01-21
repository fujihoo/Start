#include <stdio.h>

//int main() 
//{
//	printf("hello, world\n");
//
//	return 0;
//}

//{
//	printf("%s\n", "Hello, world!");
//
//	return 0;
//}

//{
//	printf("%s, %s\n", "Hello", "1234");
//}
//{
//	printf("Hello, %s\n", "world!");
//
//	return 0;
//}

//변수선언!
//char, short, int, long: 정수(저장할 수 있는 크기가 다릅니다)
//float, double: 실수
//void: 형태가 없는 자료형(포인터를 사용할 때, 함수의 반환값을 표현할 때 등 다양하게 사용됩니다)
//decimal : 10진수
//%d: decimal, 10진수의 약어로 d를 사용합니다.
//%u: 부호 없는(unsigned decimal) 10진수의 약어로 u를 사용합니다.
//%s: 문자열(string)의 약어로 s를 사용합니다.
	
//{
//	int num1;	// 정수형 변수 선언
//	int num2;
//	int num3;
//
//	num1 = 10;	// 변수에 값 할당(저장)
//	num2 = 20;
//	num3 = 30;
//
//	printf("%d %d %d\n", num1, num2, num3);	// 10 20 30 : 변수에 저장된 값을 %d로 출력
//	
//	return 0;
//}

//{
//	int num1, num2, num3;	// 변수를 콤마로 구분하여 변수 여러 개를 선언
//	num1 = 10;	//변수에 값 할당
//	num2 = 20;
//	num3 = 30;
//
//	printf("%d %d %d\n", num1, num2, num3);	// 10 20 30 : 변수에 저장된 값을 %d로 출력
//
//	return 0;
//}

//{
//	int num1 = 10;	// 변수를 선언하면서 값 할당(초기화)
//	int num2 = 20, num3 = 30;	// 변수 여러 개를 선언하면서 값 할당(초기화)
//
//	printf("%d %d %d\n", num1, num2, num3);	// 10 20 30 : 변수에 저장된 값을 %d로 출력
//
//	return 0;
//}

//{
//	int num1 = 10, num2 = 20, num3 = 30;
//	printf("%d %d %d\n", num1, num2, num3);
//
//	return 0;
//}

//{
//	char num1 = -10;	// 1바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
//	short num2 = 30000;	// 2바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
//	int num3 = 1234567890;	// 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
//	long num4 = 1234567890;	// 8바이트 부호 있는 정수형으로 변수를 선언하고 값 항당
//	long long num5 = -1234567890123456789;	// 8바이트 부호 있는 정수형으로 변수를
//						// 선언하고 값 할당
//
//	// char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
//	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
//
//	return 0;
//}

//{
//	unsigned char num1 = 200;	// 1바이트 부호 없는 정수형으로
//					// 변수를 선언하고 값 할당
//	unsigned short num2 = 60000;	// 2바이트 부호 없는 정수형으로
//					// 변수를 선언하고 값 할당
//	unsigned int num3 = 4123456789;	// 4바이트 부호 없는 정수형으로
//					// 변수를 선언하고 값 할당
//	unsigned long num4 = 4123456789;	// 4바이트 부호 없는 정수형으로
//						// 변수를 선언하고 값할당
//	unsigned long long num5 = 1234567890123456789; // 8바이트...
//
//	//unsigned char, unsigned short, unsigned int는 %u로 출력하고 
//	// unsigned long은 %lu, unsigned long long은 %llu로 출력
//	printf("%u %u %u %lu %llu\n", num1, num2 , num3, num4, num5);
//
//	return 0;
//}
//{
//	char num1 = 127;	// char에 저장할 수 있는 최대값 127보다 큰 수를 할당
//				// 오버플로우 발생
//	unsigned char num2 = 255;	// unsigned char에 저장할 수 있는 최대값 255보다 큰 수를 할당
//					// 오버플로우 발생
//	printf("%d %u\n", num1, num2);	// -128 0 : 저장할 수 있는 범위를 넘어서므로
//					// 최소값부터 다시 시작
//
//	return 0;
//}

//자료형(타입)의 크기를 바이트(byte) 단위로 구하는 sizeof 연산자에 대해 알아보겠습니다. 먼저 sizeof 연산자는 다음과 같은 형식으로 사용합니다.
//sizeof 표현식  표현식은 변수, 상수, 배열 등 프로그래머가 만들어낸 요소를 뜻합니다.
//sizeof(자료형)
//sizeof(표현식)

//{
//	int num1 = 0;
//	int size = sizeof num1;
//
//	printf("num1의 크기 : %d\n", size);
//
//	return 0;
//}

//{
//	printf("char: %ld, short: %ld, int: %ld, long: %ld, long long: %ld\n",
//		sizeof(char),	// 1: sizeof로 char 자료형의 크기를 구함
//		sizeof(short),	// 2: sizeof로 short 자료형의 크기를 구함
//		sizeof(int),	// 4: sizeof로 int 자료형의 크기를 구함
//		sizeof(long),	// 8: sizeof로 long 자료형의 크기를 구함
//		sizeof(long long)	// 8: ...
//	);
//
//	return 0;
//}

//위의 자료형을 %d가 아닌 %ld로 불러오는 이유는 내가 사용하는 컴퓨터가 MAC 64bit이기 때문에 long이 8비트이다. %d는 int를 불러오기 때문에 즉 4비트이기 때문에 4비트로 8비트를 불러올 수 없다고 이해했다.

//#include <limits.h>	// 자료형의 최댓값과 최솟값이 정의된 헤더 파일

//int main()
//{
//	char num1 = CHAR_MIN;	// char 최솟값
//	short num2 = SHRT_MIN;	// short의 최솟값
//	int num3 = INT_MIN;	// int의 최솟값
//	long num4 = LONG_MIN;	// long의 최솟값
//	long long num5 = LLONG_MIN;	//long long...
//
//// char, short, int는 %d로 출력하고 long은 %ld로 출력, long long은 %lld로 출력
//	printf("%d %d %d %ld %lld\n",
//	num1, num2, num3, num4, num5);
//
//	return 0;
//}

//{
//	char num1 = CHAR_MAX + 1; //최댓값보다 큰 수를 할당, 오버플로우 발생
//	short num2 = SHRT_MAX + 1; //...
//	int num3 = INT_MAX + 1; //...
//	long long num4 = LLONG_MAX + 1;
//
//	printf("%d %d %d %lld\n",
//	num1, num2, num3, num4);
//
//	return 0;
//}

//오버플로우 문제는 당장 버그를 일으키지 않지만 언제 터질지 모르는 시한 폭탄과 같습니다. 즉, 오버플로우 상황이 발생하면 예상치 못한 버그가 발생하며 원인을 찾기가 매우 힘듭니다. 따라서 기능을 구현하기 전에 사용한 자료형이 적합한지 세심히 살펴봐야 합니다.
//유튜브에서 싸이의 강남스타일 뮤직 비디오 조회수가 21억을 넘어서면서 음수로 표시된 적이 있었는데 이 사례도 정수 오버플로우 문제입니다.

//int main()
//{
//	char num1;
//	short num2;
//	long long num3;
//
//	printf("%ld\n", sizeof(num1) + sizeof(num2) + sizeof(long long));
//
//	return 0;
//}

//int main()
//{
//	float num1 = 0.1f;	// 단정밀도 부동소수점 변수를 선언하고 값을 할당, float은 숫자 뒤에 f를 붙임
//	
//	double num2 = 3867.215820;
//	//배정밀도 부동소수점 변수를 선언하고 값을 할당
//	//double은 숫자 뒤에 아무것도 붙이지 않음
//	
//	long double num3 = 9.3275131;
//	//배정밀도 부동소수점 변수를 선언하고 값을 할당
//	//long double은 숫자 뒤에 l을 붙임
//	
//	// float와 double은 %f로 출력, long double은 %LF로 출력
//	printf("%f, %f, %Lf\n", num1, num2, num3);
//	return 0;
//}

//int main()
//{
//	float num1 = 3.e5f;
//	double num2 = -1.3827e-2;
//	long double num3 = 5.21e9l;
//
//	//float와 double은 %e로 출력, long doubledms %Le로 출력
//	printf("%e %e %Le\n", num1, num2, num3);
//
//	return 0;
//}

int main()
{
	float num1 = 0.0f;
	double num2 = 0.0;
	long double num3 = 0.0l;

	printf("float: %ld, double: %ld, long double: %ld\n", sizeof(num1), sizeof(num2), sizeof(num3)
	);

	return 0;

}

