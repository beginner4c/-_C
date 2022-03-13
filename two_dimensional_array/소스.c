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

	// 1, 2 ���� �迭�� ������� 1 ���� 25������ ������ �����ϰ� ����ϼ���
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

	// 2. 2 ���� �迭�� ������� 1 1���� 25 ������ ������ �����ϰ� ����ϼ���
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

	// �迭�� �ε������� ������ ����� �� �ִ� !
	// (�迭�� ����ο��� ���̿��� ����� ����� �� �ִ�)

	int x = 0, y = 0;

	for (int i = 0; i < 5; i++) {			// ���δ� �����ϰ� �� ĭ�� �Ʒ���
		if (i % 2 != 0) {					// ���ΰ��� Ȧ���̸�
			for (int j = 4; j >= 0; j--)	// j : 4, 3, 2, 1, 0 (��������)
				arr[i][j] = ++num;
		}
		else {								// ���ΰ��� ¦���̸�
			for (int j = 0; j < 5; j++)		// j : 0, 1, 2, 3, 4 (��������)
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