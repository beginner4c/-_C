#include<stdio.h>

// Array (배열)

int main()
{
	int num = 10;	// 단일 변수 선언, [자료형] [변수 이름] = [초기값];

	int arr[5] = { 10, 20, 30, 40, 50 };
	// 배열 선언, [자료형] [배열이름][길이] = { 값1, 값2, 값 3, ...};
	// 배열은 같은 자료형의 여러 변수를 묶어서 활용하는 형태를 말한다
	// 일반 변수와 달리, 배열은 선언하면 메모리의 연속된 공간에 값을 저장한다
	// 배열의 길이는 처음에만 지정할 수 있고, 길이를 초과하면 안된다
	// 배열 안의 각 변수를 배열의 [멤버 변수]라고 부른다
	// 각 멤버 변수를 참조할 수 있는 순번을 [인덱스]라고 부른다

	printf("arr[0] : %d\n", arr[0]);		// 배열의 순번은 0 부터 시작한다
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);		// 배열의 길이와 같은 index는 존재하지 않는다
	printf("\n\n");
	// 배열의 멤버 변수는 일반변수와 똑같이 취급한다

	arr[0] = 11;
	printf("arr[1]에 새로운 값 입력 : ");
	scanf("%d", &arr[1]);

	arr[2] += 3;

	printf("arr[0] : %d\n", arr[0]);		// 멤버 변수를 수정하고 다시 출력
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);
	printf("\n\n");
	// 배열의 각 멤버를 출력하는 반복문 작성하기

	for (int i = 0; i < 5; i++)
		printf("arr[%d] : %d\n", i, arr[i]);

//	arr = { 1, 2, 3 };	// 식이 수정할 수 있는 lvalue 여야 합니다
	// 배열 이름에는 값을 대입할 수 없다
	int arr2[5];		// arr2 라는 이름의 길이 5 배열을 선언
//	arr2 = arr;			// 배열이름은 대입연산자의 좌변에 올 수 없다

	for (int i = 0; i < 5; i++) {		// 배열의 길이만큼 반복하여
		arr2[i] = arr[i];		// arr 에 있는 각 값을 arr2의 멤버 변수에 대입
	}


	// 배열을 선언할 때, 배열의 길이는 변수가 올 수 없다(반드시 상수만)

	int length = 10;
//	int arr3[length];		// 식에 상수값이 있어야 합니다

	double score[3];
	double total = 0;

	printf("\n\n세 정수의 합계를 구합니다\n\n");
	
	for (int i = 0; i < 3; i++) {
		printf("%d 번째 점수 입력 : ", i + 1);
		scanf("%lf", &score[i]);
		total += score[i];
	}
	printf("세 점수의 합계는 %.2lf 점 입니다\n\n", total);
	printf("세 점수의 평균은 %.2lf 점 입니다\n\n", total / 3);
}