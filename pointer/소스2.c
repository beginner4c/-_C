#include<stdio.h>

//	 Swap(&n1, &n2);
void Swap(int *p1, int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int num;
	int *pnum;

	// 1. num 변수이름을 이용하여 num에 10을 저장하고 출력하세요

	num = 10;

	printf("num 의 수 : %d\n\n", num);

	// 2. num 변수의 주소를 pnum 변수에 저장하세요

	pnum = &num;

	printf("*pnum 의 수 : %d\n\n", *pnum);

	// 3. pnum 변수를 이용하여 num에 20을 저장하고 출력하세요

	*pnum = 20;

	printf("*pnum의 수 : %d\n\n", *pnum);

	// 4. pnum 을 이용하여 scanf() 함수로 num 의 값을 입력받고 출력하세요

	printf("정수를 입력해봐요 : ");
	scanf("%d", pnum);				// &*pnum 으로 해도 되지만 &*의 경우 + 와 - 의 효과로 그냥 pnum과 다르지 않다
	printf("pnum의 수 : %d, num의 수 : %d\n\n", *pnum, num);

	// 5. n1 과 n2 의 값을 교환하세요 (원래의 변수 사용금지, 포인터로 교환)

	int n1 = 11, n2 = 22, tmp;
	int *p1 = &n1, *p2 = &n2;
	printf("n1 : %d, n2 : %d\n", n1, n2);		// 11, 22
	// 여기서 부터 p1 과 p2, tmp만 사용하여 값을 교환하세요

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("n1 : %d, n2 : %d\n", n1, n2);		// 22, 11

	Swap(&n1, &n2);		// 두 수의 값을 교환하는 함수 Swap()
	printf("n1 : %d, n2 : %d\n", n1, n2);		// 11, 22

	int n3 = 33, n4 = 44;
	printf("n3 : %d, n4 : %d\n", n3, n4);
	Swap(&n3, &n4);
	printf("n3 : %d, n4 : %d\n", n3, n4);
}