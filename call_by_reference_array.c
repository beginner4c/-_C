#include<stdio.h>

// formal parameter�� *pó�� �����ͷ� �޾Ƶ� �ǰ� []�� �迭�� �޾Ƶ� �ȴ�
int getSum(int* p, int num) {
	int sum = 0;

	for (int i = 0;i < num;i++)
		sum = sum + p[i];

	return sum;
}

// �Ʒ� add �Լ��� call by reference���� ������� �Լ��� main �Լ��� �迭�� ������ �� �� �ִ°��� Ȯ�� ����
void add(int p[], int n, int data) {
	for (int i = 0; i < n; i++)
		p[i] = p[i] + data;
}

// Array Element Ȯ�ο� �Լ�
void printArray(int* p, int num) {
	for (int i = 0; i < num;i++)
		printf("%5d", p[i]);

	printf("\n");
}

void main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//printf ("sum = %d\n", getSum(&x[0], 10));
	printf("sum = %d\n", getSum(x, 10));

	printArray(x, 10); // ���� array element Ȯ��
	add(x, 10, 100);
	printArray(x, 10); // add �Լ� ���� �� array element Ȯ��
}