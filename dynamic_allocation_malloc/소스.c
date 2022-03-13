#include<stdio.h>
// 전역 변수 : 프로그램의 모든 영역에서 접근이 가능하다
int global = 1;

void func() {	// 함수 : 호출되면 새로운 영역을 생성한다
	// 지역 변수 : 함수 영역 내에서만 접근이 가능하며, 함수가 종료되면 소멸
	int local = 1;

	//		"global : %d, local : %d\n" : 상수, 프로그램 시작 전에 미리 준비
	printf("global : %d, local : %d\n", ++global, ++local);
}

int main() {

	func();
	func();
	func();
	/*
		Code : 프로그램이 수행할 작업을 저장하는 메모리 영역
		Data : 전역 변수, Static 변수, 상수가 저장되는 영역
		Heap : 동적 할당에 사용되는 메모리 영역 (시작 전에 명시하지 않아서 이름이 없다)
		Stack : 함수를 쌓아올려가면서 처리하고, 함수 내의 지역 변수를 저장하는 영역
	*/
}