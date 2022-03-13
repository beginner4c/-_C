#include <Stdio.h>

void PrintArr(int ** arr) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i * 5 + j]);
		} printf("\n");
	} printf("\n");

}

int main()
{
	int arr[5][5] = { 0, };
	int show = 1;
	int num = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		} printf("\n");
	} printf("\n");

	// 1, 2 차원 배열에 순서대로 1 부터 25까지의 정수를 대입하고 출력하세요
	/*
	 1  2  3  4  5
	 6  7  8  9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	*/

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = show;
			show++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		} printf("\n");
	} printf("\n");

	// 2. 2 차원 배열에 순서대로 1 1부터 25 까지의 정수를 대입하고 출력하세요
	/*
	1  6 11 16 21
	2  7 12 17 22
	3  8 13 18 23
	4  9 14 19 24
	5 10 15 20 25
	*/

	show = 1;

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			arr[i][j] = show;
			show++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		} printf("\n");
	} printf("\n");

	// 배열의 인덱스에는 변수를 사용할 수 있다 !
	// (배열의 선언부에서 길이에는 상수만 사용할 수 있다)

	int x = 0, y = 0;

	for (int i = 0; i < 5; i++) {			// 세로는 일정하게 한 칸씩 아래로
		if (i % 2 != 0) {					// 세로값이 홀수이면
			for (int j = 4; j >= 0; j--)	// j : 4, 3, 2, 1, 0 (우측부터)
				arr[i][j] = ++num;
		}
		else {								// 세로값이 짝수이면
			for (int j = 0; j < 5; j++)		// j : 0, 1, 2, 3, 4 (좌측부터)
				arr[i][j] = ++num;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		} printf("\n");
	} printf("\n");

	x = 0; y = 0; num = 0;

	for (int j = 0; j < 5; j++) {
		if (j % 2 != 0) {
			for (int i = 4; i >= 0; i--)
				arr[i][j] = ++num;
		}
		else {
			for (int i = 0; i < 5; i++)
				arr[i][j] = ++num;
		}
	}

	PrintArr(arr);

}