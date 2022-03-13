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
	// 배열의 이름은 그 자체로 주소를 의미한다
	char name[20];
	char * pname = name;		// &name이 아니다 !! (이미 name 자체가 주소화 되어 있기 때문)
	printf("이름을 입력하세요 : ");
	scanf("%s", pname);
	printf("입력한 이름 : %s\n\n", name);

	int arr[5] = { 2,7,4,6,8 };
	PrintArr(arr);				// 배열의 이름을 전달하는 건 주소를 전달하는 것

	SortArr(arr);
	PrintArr(arr);
}