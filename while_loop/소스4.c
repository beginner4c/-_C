/*
	Debugging : 코드를 한 줄 씩 수행하면서 값의 변화나 오류를 찾는 과정
	F11 : 디버깅 시작, 다음 줄 진행
	F9 : 중단점 설정
	Shift + F11 : 설정한 중단점까지 바로 진행
	Shift + F5	: 디버깅 중단
*/

#include<stdio.h>

int main()
{
	/*
		1. 30 일 간 은행에 돈을 입금한다
		첫 날은 10 원, 둘째 날은 20 원, 셋째 날은 40 원... 이런 식으로 (전 날의 두 배)
		30 일 간 은행에 돈을 예금하면, 은행에 있는 총 금액은 얼마 인지 구하세요
		(int 의 표현 범위를 벗어나는 값은 long long 으로 저장)
		(long long 의 서식 문자는 %lld 로 표현 하세요)
	*/

	int day;
	long long bank, all;

	day = 1;
	bank = 10;
	all = 0;

	while (day < 30) {
		bank *= 2;
		all += bank;
		day++;

	}
	printf("은행 예금액 : %lld원\n", all);

	/*
		2. 사용자에게 정수를 입력받아서 (자릿수 무관)
		그 정수를 거꾸로 출력하는 코드를 작성하세요
		입력 : 1234
		출력 : 4321
	*/

	int result, num;

	result = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);		// 1234 라고 가정

	while (1) {				// 반복 횟수에 상관없이 식을 작성할 때 주로 사용
		result += num % 10;		// 1234, 4
		num = num / 10;			// 123, 4
		result = result * 10;	// 123, 40 ~~

		if (num < 10) {
			result += num;
			break;
		}
	}
	printf("입력한 숫자를 거꾸로 표현하면 : %d\n", result);
}