#include<stdio.h>
// 포인터 변수
int main()
{
	// 포인터 변수 : 변수가 위치한 메모리 (주소)를 저장하는 변수
	// 어떤 변수를 가리키냐에 따라서 자료형이 달라야 한다

	int num = 10;
	double db = 3.14;

	int * pnum = &num;		// 정수를 가리킬 수 있는 포인터 변수 pnum
	double * pdb;			// 실수를 가리킬 수 있는 포인터 변수 pdb
	pdb = &db;				// pdb 변수에 db 변수의 주소를 저장

	printf("num : %d, pnum : %d\n", num, pnum);
	printf("&num : %d, *pnum : %d\n", &num, *pnum);
	printf("\n");

	printf("db : %.2f, pdb : %d\n", db, pdb);
	printf("&db : %d, *pdb : %.2f\n", &db, *pdb);
	printf("\n");

	/*
		& (Amper sand) : 변수 이름 앞에 붙어서 해당 변수의 주소를 나타낸다(고정)
		* (Asterisk)
			1. 포인터 변수 선언시 : 변수 이름 앞에 붙어서 해당 변수가 포인터 변수임을 나타낸다
			2. 대입, 참조시 : 해당 포인터 변수의 값이 주소이므로, 해당 주소를 따라가라(참조)는 의미이다
	*/

	int n1 = 10;
	int n2 = 20;
	int * p1 = &n1;	// int 를 가리킬 수 있는 포인터 변수 p1을 생성하고, 그 값으로 n1 변수의 주소를 저장한다
	int * p2 = &n2;

	p1 = &n2;		// 포인터 변수에 새로운 주소를 대입
	p2 = &n1;

	printf("n1 : %d, n2 : %d\n\n", n1, n2);
	printf("*p1 : %d, *p2 : %d\n\n", *p1, *p2);		// 해당 주소의 값이 아닌가???? => 해당 주소의 값에 와서 출력된 것

	*p1 = 11;		// n2 에 11을 대입
	*p2 = 22;		// n1 에 22를 대입

	printf("n1 : %d, n2 : %d\n\n", n1, n2);			// 위에서 선언한 것은 포인터 변수의 대상인 n2와 n1에 각각 대입되었다
}