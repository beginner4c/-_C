// 구조체, struct
#include<stdio.h>
#include<stdlib.h>
struct member {		// 구조체는 서로 다른 자료형을 묶을 수 있는
	char name[20];	// 사용자 정의 자료형 (내가 직접 만드는)	
	int age;
};
typedef struct member2 {	// struct member2를 선언하고
	char name[20];			// 멤버 변수의 형태를 지정하고
	int age;				// 멤버 변수는 초기화를 할 수 없다
}Member;				// 방금 만든 struct member2를 Member라고 정한다
int main() {
	int num = 10;						// 단일 변수
	int arr[5] = { 10,20,30,40,50 };	// 같은 자료형 여러 변수
	struct member m1 = { "이지은", 27 };	// 다른 자료형 여러 변수
	Member m2 = { "김희철", 37 };

	printf("%s, %d\n", m1.name, m1.age);
	printf("%s, %d\n", m2.name, m2.age);

}