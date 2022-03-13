#include<stdio.h>
// 두 변수의 값 교환
int main()
{
	int n1 = 10, n2 = 20;

	printf("n1 : %d, n2 : %d\n", n1, n2);

	// 여기에 코드를 작성하세요
	int desk1 = n1;
	int desk2 = n2;

	n1 = desk2;
	n2 = desk1;

	printf("n1 : %d, n2 : %d\n", n1, n2);
}