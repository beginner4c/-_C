#include<stdio.h>
#include<stdlib.h>

// 자기 참조 구조체

typedef struct member {
	char name[20];
	int age;
	struct member * next;		// 자신과 같은 형태를 참조할 수 있는 포인터를 멤버로 가짐
} Member;

int main() {
	Member m1 = { "김희철", 37,0 };		// 0을 가지는 포인터는 Null Pointer 라고 한다
	Member m2 = { "이지은", 27,0 };		// 가리키는 대상이 없으니 참조하지 말라는 약속
	Member m3 = { "박명수",47,0 };

	m1.next = &m2;
	m2.next = &m3;

	printf("m1.name : %s\n", m1.name);
	printf("m1.next->name : %s\n", m1.next->name);
	printf("m1.next->next->name : %s\n", m1.next->next->name);

	printf("\n\n");

	Member * p = &m3;
	printf("m3.name : %s\n", m3.name);
	printf("m2 다음 사람의 이름 : %s\n", (*m2.next).name);
	printf("p가 가르키는 구조체의 이름 : %s\n\n", p->name);
	// -> 가 등장 할 때 오른쪽에 오는 값은 구조체 자체가 아닌 구조체의 내용물(멤버 변수)이다
	// -> 는 . 과 * 를 합쳐놓은 것이다

	// -> 연산자는 [포인터]에서 쓸 수 있으며, 포인터가 가르키는 [구조체의 멤버] 를 의미한다

	//printf("m3.next->name : %s\n", m3.next->age);
	// F9 먹여놓고 F11 이후 Shift F11 로 확인해보면 값이 없다

	p = &m1;

	while (p != 0) {
		printf("이름 : %s\n", p->name);
		printf("나이 : %d\n\n", p->age);
		p = p->next;		// p 자체와 p 가 가르키는 next 는 완전히 다른 값이다
	}
}