// ex01.c
// switch ~ case
#include<stdio.h>
int main()
{
	// switch ~ case : switch로 지정한 변수의 값에 따라서 서로 다른 코드를 실행한다

	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	switch (num) {	// num의 값에 따라서
	case 1:	printf("1을 입력했습니다\n"); //break;	// break는 {} 범위를 아래로 탈출
	case 2: printf("2를 입력했습니다\n"); //break;
	case 3: printf("3을 입력했습니다\n"); //break;
	default:
		printf("1, 2, 3외의 다른 수를 입력했습니다\n");
	}

	printf("\n\n");
	printf("정수 입력 : ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3: printf("1 혹은 3을 입력했습니다\n"); break;
	case 2:
	case 4: printf("2 혹은 4를 입력했습니다\n"); break;
	}
	printf("\n\n");
	switch (num % 2) {
	case 0: 
		printf("입력한 수 %d는 ", num);
		printf("짝수입니다\n"); 
		break;
	case 1: 
		printf("입력한 수 %d는 ", num);
		printf("홀수입니다\n"); 
		break;
	}

}