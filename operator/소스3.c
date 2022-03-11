#include <stdio.h>

int main()
{
	// 삼항 연산자 : 조건에 따라서 서로 다른 결과를 수행하는 연산자
	// 조건 ? [참] : [거짓]

	int age;
	printf("나이 입력 : ");
	scanf("%d", &age);
	printf("%s 입니다\n", (age >= 20)? "성인" : "미성년자");
	//						조건		참		거짓

}