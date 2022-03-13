#include<stdio.h>
#include<stdlib.h>
// 함수 연습 

int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int ArrMin(int *x, int y) {
	int num = 0;

	for (int i = 0; i < 5; i++) {

	}
}

int main()
{
	// int 형 값 두개를 전달받아서, 큰 값을 반환하는 함수 Max()를 출력
	// printf("Max(3, -4) : %d\n", Max(3, -4));
	// 함수에 대해 알고 있는가??

	printf("Max(3, -4) : %d\n", Max(3, -4));

	// int 형 배열과 길이를 전달받아서, 가장 작은 값을 반환하는 함수 ArrMin()을 출력
	// int arr[5] = { 11,5,2,4,3 };
	// printf("ArrMin(arr, 5) : %d\n", ArrMin(arr, 5));

	int arr[5] = { 11,5,2,4,3 };
	printf("ArrMin(arr, 5) : %d\n", ArrMin(arr, 5));

	// 두 수의 주소를 전달받아서, 두 수를 교환하는 함수 Swap()을 출력 
	//int n1 = 11, n2 = 23;
	//printf("n1 : %d, n2: %d\n", n1, n2);
	//Swap(&n1, &n2);
	//printf("n1 : %d, n2: %d\n", n1, n2);

}