#include<stdio.h>
#include<stdlib.h>

// for문을 이용해 1부터 100까지 계속해서 더하는 계산과 테이블 형식으로 cmd 창에서 보이게 하는 거
// 교수님 2학년 c언어 수업 과제 다시 풀어본 것

int getSum(int n) {
	// 양수가 들어오지 않으면 종료 처리
	if (n <= 0) {
		printf("양수를 입력해주세요");
		exit(-1);
	}
	return n*(n+1)/2;
}

void main() {
	printf("summation table from 1 to 100\n");

	int k = 1;

	for (int i = 0; i < 10; i++) {
		// 테이블 모양 잡기
		putchar('+'); // printf 사용하지 말라 하셔서
		
		for (int j = 0;j < 10;j++)
			printf("-----+");

		putchar('\n'); // 위의 2중 for 문이 끝나면 줄 띄움

		putchar('|');

		// 숫자 계산 + 테이블 모양 따라 여백 추가
		for (int j = 0;j < 10;j++)
			printf("%5d|", getSum(k++));

		putchar('\n');
	}
	// 마지막 줄 테이블 모양 잡기
	putchar('+');
	for (int j = 0;j < 10;j++)
		printf("-----+");

	putchar('\n');

}
