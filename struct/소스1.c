// ����ü, struct
#include<stdio.h>
#include<stdlib.h>
struct member {		// ����ü�� ���� �ٸ� �ڷ����� ���� �� �ִ�
	char name[20];	// ����� ���� �ڷ��� (���� ���� �����)	
	int age;
};
typedef struct member2 {	// struct member2�� �����ϰ�
	char name[20];			// ��� ������ ���¸� �����ϰ�
	int age;				// ��� ������ �ʱ�ȭ�� �� �� ����
}Member;				// ��� ���� struct member2�� Member��� ���Ѵ�
int main() {
	int num = 10;						// ���� ����
	int arr[5] = { 10,20,30,40,50 };	// ���� �ڷ��� ���� ����
	struct member m1 = { "������", 27 };	// �ٸ� �ڷ��� ���� ����
	Member m2 = { "����ö", 37 };

	printf("%s, %d\n", m1.name, m1.age);
	printf("%s, %d\n", m2.name, m2.age);

}