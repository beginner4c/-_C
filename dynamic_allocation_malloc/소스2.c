#include<stdio.h>
#include<stdlib.h>	// malloc() 함수, free () 함수를 포함하는 헤더 파일

int main()
{

	/*
	Code : 프로그램이 수행할 작업을 저장하는 메모리 영역
	Data : 전역 변수, Static 변수, 상수가 저장되는 영역
	Heap : 동적 할당에 사용되는 메모리 영역 (시작 전에 명시하지 않아서 이름이 없다)
	Stack : 함수를 쌓아올려가면서 처리하고, 함수 내의 지역 변수를 저장하는 영역
*/

	// 예제1 : num 변수에 정수를 입력받아서, 1 부터 num 까지의 합을 출력하는 코드

	int num, sum = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("입력 받은 수의 합은 %d 입니다\n\n", sum);

	// 예제 2 : 사용자에게 반복하여 정수를 입력 받아 0 을 입력하기 전까지의 합을 출력
	do {
		printf("정수 입력(0을 입력하면 종료) : ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("입력한 수의 합계는 %d 입니다\n", sum);

	// 예제 3 : 사용자에게 반복하여 정수를 입력받고 그 목록을 다시 출력하는 코드

	int length;
	
	printf("필요한 변수의 개수를 입력 : ");
	scanf("%d", &length);

	int * p = malloc(length);	// 동적 할당을 실행하는 함수
								// malloc : Memory Allocation
								// 기본 형태의 사용법 : malloc(정수형태의 바이트)

	for (int i = 0; i < length; i++) {
		printf("정수 입력 : ");
		scanf("%d", &p[i]);
	} printf("\n");

	printf("결과 출력 : ");
	for (int i = 0; i < length; i++) {
		printf("%d ", p[i]);
	} printf("\n\n");

}