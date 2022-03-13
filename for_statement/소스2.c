#include<stdio.h>

int main()
{
	// 문제, 사용자에게 2 ~ 9 사이의 정수를 입력받아서
	// 해당 숫자의 구구단을 출력하는 코드를 작성하세요

	int x, y, re = 0;

	// while 혹은 do ~ while 은 횟수에 상관없이 반복을 진행
	do {
		printf("2 ~ 9 사이의 정수만 입력 ㄱㄱ : ");
		scanf("%d", &x);			// scanf에 멍청하게 \n 붙이는 실수 하지 말기
	} while (x < 2 || x > 9);
	printf("\nx = %d\n", x);

	// for 문은 지정된 횟수만큼 반복한다
	for (int y = 0; y <= 9; y++) {
		re = x * y;
		printf("\n%d x %d = %d\n", x, y, re);
	}
	
}