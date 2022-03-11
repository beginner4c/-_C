#include <stdio.h>		// operator (연산자)

int main()
{
	int num1;
	num1 = 10;		// 대입

	int num2;
	num2 = 20;		// 대입

	int answer;
	answer = num1 + num2;	// 대입

	// 산술 연산자 : +, -, *, /, %
	// 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지

	// 1. 나눗셈의 몫은 자료형에 따라 결과가 다르다

	num1 = 10;
	num2 = 3;

	double div1 = num1 / num2;			// [정수 / 정수]
	double div2 = num1 / (double)num2;	// [정수 / 실수]

	printf("div1 : %.2lf\n", div1);
	printf("div2 : %.2lf\n", div2);

	int n1 = 10;
	int n2 = 13;

	printf("n1을 2로 나눈 나머지 : %d\n", n1 % 2);
	printf("n2를 2로 나눈 나머지 : %d\n", n2 % 2);
	printf("\n");

	int n3 = 190422;
	int date = n3 % 100;
	n3 = n3 / 100;
	int month = n3 % 100;
	int year = n3 / 100;

	printf("%d 년 %d 월 %d 일입니다\n", year, month, date);

	// 크기 비교 연산자
	n1 = 10, n2 = 3;
	printf("n1 > n2 : %d\n", n1 > n2);		// n1 이 n2 보다 크다 (초과)
	printf("n1 < n2 : %d\n", n1 < n2);		// n1 이 n2 보다 작다 (미만)
	printf("n1 >= n2 : %d\n", n1 >= n2);	// n1 이 n2 보다 크거나 같다 (이상)
	printf("n1 <= n2 : %d\n", n1 <= n2);	// n1 이 n2 보다 작거나 같다 (이하)
	printf("n1 == n2 : %d\n", n1 == n2);	// n1 이 n2 와 같다 (일치)
	printf("n1 != n2 : %d\n", n1 != n2);	// n1 이 n2 와 같지 않다 (불일치)

	// 크기 비교 연산자는 결과를 1 혹은 0 으로 나타낸다
	// 1은 참(True)를 의미하고, 0은 거짓(False)를 의미한다
	// 크기 비교 연산자의 '==' 와 대입 연산자 '=' 를 혼동하지 않도록 주의

	// 논리 연산자
	// 논리 결과 간의 연산을 수행하여 그 결과는 다시 논리 값으로 나타난다(1, 0)

	int age = 24;
	int gender = 3;

	printf("나이가 19 세 이상인가 : %d\n", age >= 19);
	printf("성별이 남성인가 : %d\n", gender % 2 == 1);

	int result_age = age >= 19;
	int result_gender = gender % 2 == 1;

	printf("나이가 19 세 이상이면서 동시에 남성인가 : %\d\n", result_age && result_gender);

	// 결과 표

	int true = 1;
	int false = 0;
	// 두 조건을 동시에 만족해야만 결과가 참이고, 그 외에 모두 거짓
	
	// and 연산(&&) : 두 조건을 동시에 만족해야만 결과가 참이고, 그 외에는 모두 거짓
	printf("true && true : %d\n", true && true);
	printf("true && false : %d\n", true && false);
	printf("false && true : %d\n", false && true);
	printf("false && false : %d\n", false && false);
	printf("\n");

	// or 연산 (||) : 두 조건 중 하나라도 참이 있으면 결과가 참이고, 둘 다 거짓이면 거짓
	printf("true || true : %d\n", true || true);
	printf("true || false : %d\n", true || false);
	printf("false || true : %d\n", false || true);
	printf("false || false : %d\n", false || false);
	printf("\n");

	// 복합 대입 연산자 : +=, -=, *=, /=, %=
	// 사칙 연산과 대입을 동시에 수행한다
	/*
		A += B		A = A + B	(A에 B를 더한 값을 다시 A에 대입한다)
		A -+ B		A = A - B	(A에 B를 뺀 값을 다시 A에 대입한다)
		A *= B		A = A * B	(A에 B를 곱한 값을 다시 A에 대입한다)
		A /= B		A = A / B	(A에 B를 나눈 값을 다시 A에 대입한다)
		A %= B		A = A % B	(A에 B를 나눈 나머지를 다시 A에 대입한다)
	*/

	int cost = 0;
	int member1 = 10000;
	int member2 = 20000;
	int member3 = 15000;
	cost += member1;		// cost = cost + member1;
	cost += member2;		// cost = cost + member2;
	cost += member3;		// cost = cost + member3;

	printf("cost : %d원\n", cost);

	// 단항 연산자 (++, --)
	int view = 0;
	
	printf("조회수 : %d\n", view);
	view++;	// view = view + 1		// view += 1	// 이전 값에서 1 증가시켜라
	printf("조회수 : %d\n", view);
	view++;
	printf("조회수 : %d\n", view);
	view++;

	/*
		형식		의미
		num++		num 의 값을 먼저 확인하고 이후에 1을 증가시킨다 (후 증가)
		++num		num 의 값을 먼저 증가시키고, 이후에 확인한다 (선 증가)
		num--		num 의 값을 먼저 확인하고 이후에 1을 감소시킨다 (후 감소)
		--num		num 의 값을 먼저 감소시키고, 이후에 확인한다 (선 감소)
	*/

	int num = 10;
	printf("num++ : %d\n", num++);		// 나중에 확인하기 때문에 값은 11 이 들어가도 값은 10 으로 출력된다
	printf("++num : %d\n", ++num);		// 먼저 확인하기 때문에 값이 12 가 들어가서 값이 12 로 출력된다

	// +, - 부호
	printf("num : %d\n", num);
	printf("-num : %d\n", -num);		// 앞에 -를 붙인 것 만으로도 양수에서 음수로 반전이 가능하다

	num = -3;

	printf("num : %d\n", num);
	printf("-num : %d\n", -num);		// 기존의 -3의 값이 반전되어서 +3으로 반전된다
}