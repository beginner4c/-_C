#include <stdio.h>

int main()
{
	int n1, n2, result = 0;
	char oper;

	// 왜 여기 위치에 result += n1; 을 입력하면 오류가 발생???
		// 이유는 n1 의 값이 정의되어 있지 않기 때문이다

	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &n1);
	result += n1;

	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &n2);

	printf("덧셈 혹은 뺄셈 기호를 입력하세요 : ");
	scanf("%c", &oper); scanf("%c", &oper);
	
	result += (oper == '+') ? n2 : -n2;

	printf("result : %d\n", result);

	printf("================================\n\n");

	int count = 0;
	char yn;
	
	printf("count : %d\n", count);

	printf("증가할까요 (y/n) : ");
	scanf("%c", &yn); scanf("%c", &yn);

	count += (yn == 'y') ? 1 : 0;

	printf("count : %d\n", count);
}