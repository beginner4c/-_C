#include<stdio.h>

void main() {
	unsigned int x = 128, y;
	int count;

	printf("초기값 왼쪽 이동 결과 \n");
	
	for (count = 1; count <= 4;count++) {
		y = x << count;

		printf("%4d%6d%10d\n", x, count, y);
	}

	printf("\n 초기값 오른쪽 이동 결과\n");

	for (count = 1;count <= 4;count++) {
		y = x >> count;

		printf("%4d%6d%10d\n", x, count, y);
	}
}