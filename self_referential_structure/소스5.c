#include<stdio.h>
#include<stdlib.h>
// �Լ� ���� 

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
	// int �� �� �ΰ��� ���޹޾Ƽ�, ū ���� ��ȯ�ϴ� �Լ� Max()�� ���
	// printf("Max(3, -4) : %d\n", Max(3, -4));
	// �Լ��� ���� �˰� �ִ°�??

	printf("Max(3, -4) : %d\n", Max(3, -4));

	// int �� �迭�� ���̸� ���޹޾Ƽ�, ���� ���� ���� ��ȯ�ϴ� �Լ� ArrMin()�� ���
	// int arr[5] = { 11,5,2,4,3 };
	// printf("ArrMin(arr, 5) : %d\n", ArrMin(arr, 5));

	int arr[5] = { 11,5,2,4,3 };
	printf("ArrMin(arr, 5) : %d\n", ArrMin(arr, 5));

	// �� ���� �ּҸ� ���޹޾Ƽ�, �� ���� ��ȯ�ϴ� �Լ� Swap()�� ��� 
	//int n1 = 11, n2 = 23;
	//printf("n1 : %d, n2: %d\n", n1, n2);
	//Swap(&n1, &n2);
	//printf("n1 : %d, n2: %d\n", n1, n2);

}