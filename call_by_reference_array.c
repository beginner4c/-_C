#include<stdio.h>

// formal parameter를 *p처럼 포인터로 받아도 되고 []로 배열로 받아도 된다
int getSum(int* p, int num) {
	int sum = 0;

	for (int i = 0;i < num;i++)
		sum = sum + p[i];

	return sum;
}

// 아래 add 함수로 call by reference으로 만들어진 함수가 main 함수의 배열에 영향을 줄 수 있는가를 확인 가능
void add(int p[], int n, int data) {
	for (int i = 0; i < n; i++)
		p[i] = p[i] + data;
}

// Array Element 확인용 함수
void printArray(int* p, int num) {
	for (int i = 0; i < num;i++)
		printf("%5d", p[i]);

	printf("\n");
}

void main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//printf ("sum = %d\n", getSum(&x[0], 10));
	printf("sum = %d\n", getSum(x, 10));

	printArray(x, 10); // 원본 array element 확인
	add(x, 10, 100);
	printArray(x, 10); // add 함수 실행 후 array element 확인
}