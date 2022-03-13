#include<stdio.h>

int main() {

	char ch1 = 'A';
	char ch2 = 66;
	char ch3 = 127;
	char ch4 = -128;

		printf("ch1 : %d, ch2 : %d\n", ch1, ch2);
		printf("ch1 : %c, ch2 : %c\n", ch1, ch2);
		printf("ch3 : %d, ch4 : %d\n", ch3, ch4);
		printf("\n");

		short sh1 = 32767;
		short sh2 = -32768;

		printf("sh1 : %d, sh2 : %d\n", sh1, sh2);

		// 크기가 2 바이트 이다 = 크기가 2 * 8 비트이다
		// 2^16 개의 값을 표현할 수 있다 = 65536개의 값을 표현할 수 있다
		// + 32767, 0, -32768

		/*
			bit : 컴퓨터에서 값을 표현할 수 있는 최소 단위, 0이나 1을 표현한다
			Byte : 8 개의 bit를 묶어서 하나의 바이트를 구성하고 의미있는 데이터를 표현한다

			char(1byte) : 0000 0000(8bit)
			short(2byte) : 0000 0000 0000 0000(16bit)
		*/

		int num;
		// 정수를 담을 수 있는 4 byte 크기의 변수를 선언하고 그 변수의 이름을 num이라고 지정한다
		num = 11;
		// num이라는 이름으로 지정된 변수의 공간에 11 이라는 값을 복사하여 저장한다
		// 4 byte = 32 bit, 2^32 = 약 42억 9천만
		// -21억 ~ 0 ~ +21억 정도의 크기를 표현할 수 있다
		// 자료형을 명시하지 않은 데이터는 정수이면 모두 int로 간주한다
		// 정수의 대표 자료형

		char ch5 = 97; // 97은 int

		long long ln = 2200000000;	// 22억
		printf("ln : %lld\n", ln);	// int : %d, long : %ld, long long : %lld
		// int로 표현할 수 없는 더 큰 정수를 표현하기 위해서 만들어진 자료형, %f

		float fl = 1.1;
		printf("fl : %.1f\n", fl);
		// 실수를 표현하는 4byte 자료형

		double db = 3.14;
		printf("db : %.2lf\n", db);
		// 실수를 표현하는 8byte 크기의 실수형 기본 자료형, %lf

		// float이나 double은 정확한 값이 아니라, 최대한 근사치에 가까운 값을 표현
		// 부동소수점 방식
		// float과 double의 계산법이 약간 다르기 때문에 가급적 섞어서 쓰지 않는다
		
		char name[20] = "이지은";
		// c언어에서는 문자열을 위한 자료형이 따로 없어서
		// 단일 문자를 여러개 연속으로 배치하여 사용하는 형태를 쓴다(배열)

		printf("name의 크기 : %d Byte\n", sizeof(name));
		printf("\"이지은\"의 크기 : %d Byte\n", sizeof("이지은"));
		// 문자가 연속으로 배열되어 있을 때, 문자열의 끝을 의미하는 글자가 하나 추가

		char name2[20] = { 'j', 'o', 'h', 'n', '\0' };
		printf("name2 : %s\n", name2);		// null 문자 : '\0' (escape seqence)

		getch();
}