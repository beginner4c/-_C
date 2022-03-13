#include<stdio.h>
#include<stdlib.h>

// �ڱ� ���� ����ü

typedef struct member {
	char name[20];
	int age;
	struct member * next;		// �ڽŰ� ���� ���¸� ������ �� �ִ� �����͸� ����� ����
} Member;

int main() {
	Member m1 = { "����ö", 37,0 };		// 0�� ������ �����ʹ� Null Pointer ��� �Ѵ�
	Member m2 = { "������", 27,0 };		// ����Ű�� ����� ������ �������� ����� ���
	Member m3 = { "�ڸ��",47,0 };

	m1.next = &m2;
	m2.next = &m3;

	printf("m1.name : %s\n", m1.name);
	printf("m1.next->name : %s\n", m1.next->name);
	printf("m1.next->next->name : %s\n", m1.next->next->name);

	printf("\n\n");

	Member * p = &m3;
	printf("m3.name : %s\n", m3.name);
	printf("m2 ���� ����� �̸� : %s\n", (*m2.next).name);
	printf("p�� ����Ű�� ����ü�� �̸� : %s\n\n", p->name);
	// -> �� ���� �� �� �����ʿ� ���� ���� ����ü ��ü�� �ƴ� ����ü�� ���빰(��� ����)�̴�
	// -> �� . �� * �� ���ĳ��� ���̴�

	// -> �����ڴ� [������]���� �� �� ������, �����Ͱ� ����Ű�� [����ü�� ���] �� �ǹ��Ѵ�

	//printf("m3.next->name : %s\n", m3.next->age);
	// F9 �Կ����� F11 ���� Shift F11 �� Ȯ���غ��� ���� ����

	p = &m1;

	while (p != 0) {
		printf("�̸� : %s\n", p->name);
		printf("���� : %d\n\n", p->age);
		p = p->next;		// p ��ü�� p �� ����Ű�� next �� ������ �ٸ� ���̴�
	}
}