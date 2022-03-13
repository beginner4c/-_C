#include<stdio.h>

int main()
{
	// 구구단 전체를 출력하는 코드

	int dan = 2;

	// 2 중 for 문 : for 문 내에 또 다른 for 문을 설정하여 반복을 반복하기

	for (int dan = 2; dan < 10; dan++) {		// 큰 반복(단)
		for (int i = 1; i < 10; i++) {			// 작은 반복(단 안에서의 한 줄)
			printf("%d x %d = %d\n", dan, i, dan * i);
		}
	}
	printf("\n");

	char ch = '*';

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", ch);		// 조건에 따라 문자를 5 번 작성 (* * * * *)
		}
		printf("\n");		//안의 for 문이 끝나면 띄워쓰기 적용 후 조건을 따라 반복
	}
	printf("\n");
	/*
		i		j		result(i % 5 + j + 1)
		----------------------------------------
		0		0		1
		0		1		2
				2		3
				3		4
				4		5
		1		0		6
				1		7
				2		8
				3		9
				4		10
	*/

	printf("\n\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || i == 4 || j == 0 || j == 4)
				printf("%s ", "□");		// 한글 'ㅁ' 에서 한자 + Pagedown 1 + 5 번 문자
			else
				printf("   ");
		} printf("\n");
	} printf("\n");
	printf("\n\n");

	int num = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", num++);
		} printf("\n");
	}printf("\n");

	// 문제. 5 x 5 의 그림에서 아무 문자를 출력할 때
	//		도형의 전체 그림이 x 를 나타내도록 출력하세요

	int x, y;

	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 5; y++) {
			if (x == y) {
				printf("? ");
			}
			else if (x + y == 4) {
				printf("? ");
			}
			else
				printf("  ");
		} printf("\n");
	} printf("\n");
}