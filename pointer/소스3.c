#include<stdio.h>

void PrintArr(int * arr) {
	printf("arr : ");

	for (int i = 0; i < 5; i++)
		printf("%d ", *(arr + i));
		// printf("%d ", arr[i]);
	printf("\n\n");
}
void SortArr(int * arr) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main()
{
	// �迭�� �̸��� �� ��ü�� �ּҸ� �ǹ��Ѵ�
	char name[20];
	char * pname = name;		// &name�� �ƴϴ� !! (�̹� name ��ü�� �ּ�ȭ �Ǿ� �ֱ� ����)
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", pname);
	printf("�Է��� �̸� : %s\n\n", name);

	int arr[5] = { 2,7,4,6,8 };
	PrintArr(arr);				// �迭�� �̸��� �����ϴ� �� �ּҸ� �����ϴ� ��

	SortArr(arr);
	PrintArr(arr);
}