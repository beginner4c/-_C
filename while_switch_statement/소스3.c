#include <stdio.h>

int main()
{
	// switch ~ case 와 while 을 이용한 메뉴 구성하기

	// while : 조건에 따라서 실행문을 반복하는 제어문 (반복문)

	int menu;
	int n1, n2;

	while (1) {
		printf("입력하는 메뉴에 따라서 다른 결과를 출력합니다\n");
		printf("1. 덧셈 \n2. 뺄셈\n3. 종료\n선택 > ");
		scanf("%d", &menu);
		printf("\n");
		switch (menu) {
		case 1:
			printf("두 수를 띄워쓰기로 입력 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			break;
		case 2:
			printf("두 수를 띄워쓰기로 입력 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d - %d = %d 입니다\n", n1, n2, n1 - n2);
			break;
		case 3:
			return;
		default:
			printf("메뉴를 잘못 선택하였습니다\n");
		}

	}
}