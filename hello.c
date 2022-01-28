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

//int main()
//{
//	float num1 = 0.0f;
//	double num2 = 0.0;
//	long double num3 = 0.0l;
//
//	printf("float: %ld, double: %ld, long double: %ld\n", sizeof(num1), sizeof(num2), sizeof(num3)
//	);
//
//	return 0;
//
//}
//#include <float.h>	//실수 자료형의 양수, 최솟값, 최댓값이 정의된 헤더 파일

/*
int main()
{
	float num1 = FLT_MIN;	//float의 양수 최솟값
	float num2 = FLT_MAX;	//float의 양수 최댓값
	double num3 = DBL_MIN;	//double의 양수 최솟값
	double num4 = DBL_MAX;	//double의 양수 최댓값
	long double num5 = LDBL_MIN;	//long double의 양수 최솟값
	long double num6 = LDBL_MAX;	//long double의 양수 최댓값

	printf("%.40f %.2f\n", num1, num2);	 //0.0000000000000000000000000000000000000118
						 //340282346638528859811704183484516925440.00
	printf("%e %e\n", num3, num4);
	//2.225074e-308 1.797693e+308
	printf("%Le %Le\n", num5, num6);
	//2.225074e-308 1.797693e+308
	//왜 double이랑 long double이랑 최대최소가 같은지 모르겠음

	return 0;
}
*/

//int main()
//{
//	char c1 = 'a';	// 문자 변수를 선언하고 문자 a를 저장
//	char c2 = 'b';	// 문자 변수를 선언하고 문자 b를 저장
//
//	// char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수값이 출력됨
//	printf("%c, %d\n", c1, c1);	//a, 97: a의 ASCII 코드값은 97
//	printf("%c, %d\n", c2, c2);	//b, 98: b의 ASCII 코드값은 98
//
//	return 0;
//}

//int main()
//{
//	char c1 = 97;	// a의 ASCII 코드값 97 저장
//	char c2 = 98;	// b의 ASCII 코드값 98 저장
//
//	// char %c로 출력하면 문자가 출력되고, %d로 출력하면 정수값이 출력됨
//	printf("%c, %d\n", c1, c1);	// a, 97
//	printf("%c, %d\n", c2, c2);	// b, 98
//
//	return 0;
//}

//int main()
//{
//	char c1 = 0x61;	// a의 ASCII 코드값 0x61 할당
//	char c2 = 0x62;	// b의 ASCII 코드값 0x62 할당
//
//	// char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
//	// %x로 출력하면 16진수로 출력됨
//	printf("%c, %d, 0x%x\n", c1, c1, c1);	// a, 97, 0x61
//	printf("%c, %d, 0x%x\n", c2, c2, c2);	// b, 98, 0x62
//
//	return 0;
//}

//int main()
//{
//	char c1 = '0';	// 문자 0을 저장
//	char c2 = 0;	// 숫자 0을 저장
//
//	printf("%c %d\n", c1, c1);
//	// 0 48: 문자 상태로 0이 츌력됨
//
//	printf("%d\n", c2);
//	//printf("%c %d\n", c2, c2);	이것도 0
//	// 0: ASCII 코드 0은 널문자이므로 아무것도 출력되지 않음
//	// 정수 0이 출력됨
//	
//	return 0;
//}

//int main()
//{
//	char c1 = 'a';	// 문자 a 할당
//	char c2 = 'b';	// 문자 b 할당
//	char lineFeed = '\n';	// 제어 문자 \n 할당
//	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);	// 제어 문자도 %c로 출력할 수 있음
//
//	return 0;
//}

//int main()
//{
//	char lineFeed = '\n';	// 제어 문자 \n 할당
//
//	printf("%d 0x%x\n", lineFeed, lineFeed);
//	// 10 0xa: 제어 문자의 ASCII 코드 출력
//	
//	return 0;
//}
//
//int main()
//{
//	char c1 = '\t';
//	char c2 = '\n';
//	char c3 = '\t';
//
//	printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);
//	
//	return 0;
//}

// 리터럴!: 리터럴은 반드시 표기 방법을 지켜야한다
// 숫자는 숫자 그대로 사용해도 되지만 문자는 반드시 작은 따옴표로 묶어주어야 하고, 문자열은 큰 따옴표로 묶어준다. 문자나 문자열을 따옴표로 묶어두지 않으면 변수, 함수 등으로 인식되므로 주의 한다.

//int main()
//{
//	printf("%d\n", 10);	// 10 : 정수 리터럴
//	printf("%f\n", 0.1f);	// 0.100000: 실수 리터럴
//	printf("%c\n", 'a');	// a: 문자 리터럴
//	printf("%s\n", "Hello, world!");
//	// Hello, world!: 문자열 리터럴
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 19);	// 19: 10진 정수 리터럴
//	printf("0%o\n", 017);	// 017: 8진 정수 리터럴
//	printf("0x%X\n", 0x1F);	// 0x1F: 16진 정수 리터럴
//
//	return 0;
//}

// %o: 8진수(octal number)의 약어로 o를 사용합니다.

//int main()
//{
//	printf("%f\n", 0.1f);	// 0.100000: 실수 리터럴  소수점 표기
//	printf("%f\n", 0.1F);	// 0.100000: 실수 리터럴 소수점 표기
//	printf("%f\n", 1.0e-5f);// 0.000010: 실수 리터럴 지수 표기법
//	printf("%f\n", 1.0e-5F);// 0.000010: 실수 리터럴 지수 표기법
//}

//int main()
//{
//	const int con1 = 1;	// 상수, 선언과 동시에 초기화
//	const float con2 = 0.1f;// 상수, 선언과 동시에 초기화
//	const char con3 = 'a';	// 상수, 선언과 동시에 초기화
//
//	printf("%d %f %c\n", con1, con2, con3);	// 1 0.100000 a
//
//	return 0;
//}

//int main()
//{
//	const int con1 = 1;
//
//	con1 = 2;	// 상수에 값을 할당하면 컴파일 에러 발생, 상수에 값을 할당한 뒤 컴파일하면 컴파일 에러 발생 즉, const 를 붙여서 상수가 되면 더 이상 값을 할당할 수 없다. 완전 고정된 상태!
//
//	printf("%d\n", con1);
//
//	return 0;
//}

/* const는 자료형 앞에 붙여도 되고 자료형 뒤에 붙여도 된다.
 · 자료형 const 상수이름 = 값; 이 가능하다
 ex) int const con1 = 1;
 ex) float const con2 = 0.1f;
 ex) char const con3 = 'a';
 무엇보다도 이전 코드의 규칙에 준하기*/

//int main()
//{
//	printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
//	printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴
//
//	printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
//	printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴
//
//	printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
//	printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴
//
//	return 0;
//}

//실수 리터럴 끝에 f 또는 F를 붙이면 float 크기가 되고, l 또는 L을 붙이면 long double 크기가 됩니다. 그리고 접미사를 붙이지 않으면 double 크기입니다.

//int main()
//{
//	int num1;
//
//	printf("정수를 입력하세요: ");
//	scanf("%d", &num1);	// 표준 입력을 받아서 변수에 저장
//
//	printf("%d\n", num1);	// 변수의 내용을 출력
//
//	return 0;
//}
// scanf 함수는 표준 입력을 받아서 변수에 값을 저장하는 함수입니다. 
// 다음과 같이 scanf 함수의 첫 번째 인수에는 큰따옴표 안에 서식 지정자를 넣어서 입력받을 값의 형태를 설정합니다.
// 그리고 두 번째 인수에는 입력 값을 저장할 변수를 넣습니다. 
// 여기서 주의할 점은 &num1처럼 변수 앞에 &를 붙여주어야 한다는 점입니다.
// 왜 &을 붙여야 하는지는 포인터 매개 변수 사용에서 자세히배울 예정

//int main()
//{
//	int num1, num2;
//
//	printf("정수를 두개 입력하세요: ");
//	scanf("%d %d", &num1, &num2);	// 값을 두 개 입력 받아서 변수 두 개에 저장
//
//	printf("%d %d\n", num1, num2);	// 변수의 내용을 출력
//
//	return 0;
//}

//int main()
//{
//	float num1;
//
//	printf("실수를 입력하세요: ");
//	scanf("%f", &num1);	// 실수를 입력받아서 변수에 저장
//
//	printf("%f\n", num1);	// 변수의 내용을 출력
//
//	return 0;
//}

//int main()
//{
//	double num1;
//	printf("실수를 입력하세요 :");
//	scanf("%lf", &num1);	// 자료형이 double일 대는 %lf
//
//	printf("%lf\n", num1);
//
//	return 0;
//}
//
//	//long double num2;
//	//scanf("%Lf", &num2);	// 자료형이 long double일 때는 %LF

//int main()
//{
//	char c1;
//
//	printf("문자를 입력하세요: ");
//	scanf("%c", &c1);	// 문자를 입력받아서 변수에 저장
//
//	printf("%c\n", c1);	// 변수의 내용을 출력
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int num1;
//    float num2;
//    char c1;
//
//    scanf("%d %f %c", &num1, &num2, &c1);
//
//    printf("%d\n%f\n%c\n", num1, num2, c1);
//
//    return 0;
//}
//
//여기서 "정수를 두 개 입력하세요:"와 같은 안내 문자열은 사람이 알아보기 쉬우라고 출력한 것입니다. 심사문제에서 소스 코드를 제출할 때는 scanf 함수 호출 전에 안내 문자열은 출력하지 않아야 합니다.

//// 리터럴 
//printf("%d\n", 10);
//printf("%f\n", 0.1f);
//printf("%c\n", 'a');
//printf("%s\n", "Hello, world!");
// 
//// 상수
//const int con1 = 1;
//const float con2 = 0.1f;
//const char con3 = 'a';

// unit12. 덧셈, 뺄샘하기
//int main()
//{
//	int num1;
//	int num2;
//
//	num1 = 1 + 2;	// 1에 2를 더해서 num1에 저장
//	num2 = 1 - 2;	// 1에서 2를 빼서 num2에 저장
//
//	printf("%d\n", num1);	// 3
//	printf("%d\n", num2);	// -1
//
//	return 0;
//}

//int main()
//{
//	float num1;
//	float num2;
//
//	num1 = 1.0f + 0.456789f;	// 1.0에 0.456789를 더해서 num1에 저장
//	num2 = 1.0f - 0.456789f;	// 1.0에서 0.456789를 빼서 num2에 저장
//
//	printf("%f\n", num1);	// 1.456789
//	printf("%f\n", num2);	// 0.543211
//
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//
//	num1 = num1 + 2;	// num1에 2를 더한 뒤 다시 num1에 저장
//	num2 = num2 - 2;	// num2에서 2를 뺀 뒤 다시 num2에 저장
//
//	printf("%d\n", num1);	// 3
//	printf("%d\n", num2);	// -1
//
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	
//	num1 += 2; // num1에 2를 더하 뒤 다시 num1에 저장(2를 증가시킴)
//	num2 -= 2; // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 검소시킴)
//
//	printf("%d\n", num1);	// 3
//	printf("%d\n", num2);	//-1
//
//	return 0;
//}

//참고로 num1 += num2 또는 num1 = num1 + num2와 같이 모두 변수를 사용하여 연산해도 상관없습니다.

//int main()
//{
//	int num1 = 1;
//
//	num1++;	// 정수형 변수의 값을 1 증가시킴
//
//	printf("%d\n", num1);	//2
//
//	return 0;
//}

//int main()
//{
//	int num1 = 2;
//
//	num1--;	// 정수형 변수의 값을 1 감소시킴
//
//	printf("%d\n", num1);	// 1
//
//	return 0;
//}

//int main()
//{
//	float num1 = 2.1f;
//	float num2 = 2.1f;
//
//	num1++;	// 실수형 변수의 값을 1 증가시킴
//	num2--;	// 실수형 변수의 값을 1 감소시킴
//
//	printf("%f %f\n", num1, num2);	// 3.100000 1.100000
//
//	return 0;
//}

//int main()
//{
//	char c1 = 'b';
//	char c2 = 'b';
//
//	c1++;	// 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
//	c2--;	// 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜
//
//	printf("%c %c\n", c1, c2);	// c a: b에서 1증가시켰으므로 c, b에서 1 감소시켰으므로 a
//
//	return 0;
//}

//증감 연산자는 변수 앞에 사용할 수도 있고 뒤에 사용할 수도 있습니다. 여기서 증감 연산자만 단독으로 사용했을 때는 큰 차이가 없지만, 연산자를 사용한 뒤 다른 변수에 할당할 때는 위치에 따라 큰 차이가 있습니다.

//int main()
//{
//	int num1 = 2;
//	int num2 = 2;
//	int num3;
//	int num4;
//
//	num3 = num1++;	// num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
//	num4 = num2--;	// num2의 값을 num4에 할당한 뒤 num2의 값을 1 증가시킴
//
//	printf("%d %d\n", num3, num4);	// 2 2
//
//	return 0;
//}

// 풀어쓰면 아래와 같다
//int main()
//{
//	int num1 = 2;
//	int num2 = 2;
//	int num3;
//	int num4;
//
//	num3 = num1;
//	num1 = num1 + 1;
//	// num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
//	num4 = num2;
//	num2 = num2 - 1;
//	// num2의 값을 num4에 할당한 뒤 num2의 값을 1 증가시킴
//
//	printf("%d %d\n", num3, num4);	// 2 2
//
//	return 0;
//}

//int main()
//{
//	int num1 = 2;
//	int num2 = 2;
//	int num3;
//	int num4;
//
//	num3 = ++num1;	// num1의 값을 1 증가시킨 뒤 num3에 할당
//	num4 = --num2;	// num2의 값을 1 감소시킨 뒤 num4에 할당
//
//	printf("%d %d\n", num3, num4);	// 3 1
//
//	return 0;
//}

// 풀어쓰면 아래와 같다
//int main()
//{
//	int num1 = 2;
//	int num2 = 2;
//	int num3;
//	int num4;
//
//	num1 = num1 + 1;
//	num3 = num1
//	// num1의 값을 1 증가시킨 뒤 num3에 할당
//	num2 = num2 - 1;
//	num4 = num2
//	// num2의 값을 1 감소시킨 뒤 num4에 할당

//	printf("%d %d\n", num3, num4);	// 3 1
//
//	return 0;
//}

//전위 연산자는 할당 전에 연산을 하게 되므로 바뀐 값이 다른 변수에 할당됩니다. 즉, 증감 연산자가 변수 앞에 쓰이면 연산을 먼저 처리한다는 뜻이 됩니다.

// 또 다른 예제
//int main()
//{
//	int num1 = 2;
//	int num2 = 2;
//
//	printf("%d %d\n", num1++, num2--);
//	// 2 2: num1, num2의 값을 먼저 출력한 뒤 증감 연산자 동작
//	printf("%d %d\n", num1, num2);
//	// 3 1: 증감 연산자가 동작한 결과
//
//	return 0;
//}

int main()
{
	int num1 = 2;
	int num2 = 2;

	printf("%d %d\n", ++num1, --num2);
	// 3 1: 증감 연산자가 먼저 동작한 뒤 num1, num2의 값을 출력
	printf("%d %d\n", num1, num2);
	// 3 1: 앞과 같은 값이 출력됨

	return 0;
}

