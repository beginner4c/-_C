#include <stdio.h>

int main()
{
	// 반복문 (for) : 횟수에 의한 반복을 처리하기 위한 제어문

	// while 문을 활용한 5 회 반복문

	int i = 0;
	while (i < 5) {
		printf("Hello, world !!\n");
		i++;
	}
	printf("\n");
	// for 문을 활용한 5 회 반복문

	for (int i = 0; i < 5; i++) {
		printf("Hello, world !!\n");
	}
	printf("\n");
	/*
					1					2				4
		for (변수 선언 및 초기화; 반복을 수행할 조건; 증감식) {
			실행문 ;
			   3
		}

		위에 숫자는 실행 순서
		1 - 2 - 3 - 4 - 2 - 3 - 4 - 2 - 3 - 4 - 2(false) - break;
	*/
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += i;
	}
	printf("sum : %d\n", sum);
	printf("\n");
	// 1. 1 부터 100 까지의 합을 for 문을 이용하여 구하세요

	sum = 0;

	for (int an = 0; an <= 100; an++) {
		sum += an;
	}
	printf("1 ~ 100 sum = %d\n", sum);
	printf("\n");

	// 2. 1 부터 100 까지의 짝수의 합을 구하세요

	sum = 0;

	for (int bn = 0; bn <= 100; bn++) {
		if (bn % 2) {
			sum += bn;
		}
}
	printf("1 ~ 100 짝수 sum = %d\n", sum);
	printf("\n");

	// 3. 사용자에게 정수를 입력 받아서, 입력받은 횟수 만큼
	//		문자열을 출력하세요(문자열의 내용은 자유)

	int any;

	printf("정수 아무거나 입력해줘요 : ");
	scanf("%d", &any);

	for (int cn = 0; cn < any; cn++) {
		printf("\n가나다라마바사?%d\n", cn);
	}

	printf("\n");
	// 반복 횟수를 처리하는 변수를 for 문 밖에서 선언하면 for 문이 끝난 이후에 값을 참조할 수 있다.

	int j;

	for (j = 0; j < 5; j++) {
		printf("%d", j);
	}
	printf("j : %d\n", j);
	printf("\n");

	// 반복 횟수를 처리하는 변수를 for 문 내부에서 선언하면 for 문이 끝나는 즉시 변수도 소멸한다
	for (int k = 0; k < 5; k++) {
		printf("%d\n", k);
	}
	printf("\n");
	 //printf("k : %d\n", k);		// for 문 선언이 끝나면서 k 변수는 사라짐

	// 1 부터 20 까지 한 줄에 출력하기
	for (int i = 0; i < 20; i++) {
		printf(" %d ", i + 1);
	}
	printf("\n");

}