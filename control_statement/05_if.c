#include<stdio.h>

// # 붙은 것들은 '전처리문', '선행처리문' 등으로 부른다 => '전처리기'가 처리
// 매크로 상수
#define ELEMENTARY 650
#define ELEMENTARY_AND_HIGH 800
#define ADULT 1200

int main()
{
	// 상수 : 항상 변하지 않는 수
	// 메인 함수를 컴파일러가 읽는다
	const double PI = 3.141592;

	int card = 10000; // 교통카드 잔액
	int regi = 19970206; // 태어난 때
	int today = 20190715;
	int age = today / 10000 - regi / 10000 + 1;

	if (age >= 7 && age <= 12)
		card -= ELEMENTARY;
	else if (age > 12 && age < 19)
		card -= ELEMENTARY_AND_HIGH;
	else if (age >= 19)
		card -= ADULT;

	printf("나이는 %d\n", age);
	printf("잔액은 %d원\n", card);

	return 0;
}