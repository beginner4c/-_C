#include<stdio.h>

void Quiz01(int *p1, int *p2)
{
	printf("n1 의 값은 %d, n2 의 값은 %d\n\n", *p1, *p2);
}

void Quiz02(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("n1 의 값은 %d, n2 의 값은 %d\n\n", *p1, *p2);
}

void Quize03(int *p1, int *p2)
{
	printf("&n1 : %p, &n2 : %p\n", p1, p2);
}

int main()
{
	int n1 = 10, n2 = 20;

	Quiz01(&n1, &n2);
	// Quiz01 함수를 수행하면 n1 의 값과 n2 의 값을 출력하도록 작성하세요

	Quiz02(&n1, &n2);
	// Quiz02 함수를 수행하면 n1 과 n2 의 값이 서로 교환되도록 작성하세요

	printf("&n1 : %p, &n2 : %p\n", &n1, &n2);	// %p 는 포인터 변수의 형식으로 출력하라는 것
	Quize03(&n1, &n2);
	// Quiz03 함수를 수행하면 n1 의 주소와 n2 의 주소를 출력하도록 작성하세요
	// 모든 문제는 main 함수는 건들지 말고 void 를 통해 전역 함수를 만드세요
}