// ����ü�� ��� ������ �Է¹ޱ�
#include<stdio.h>
#include<stdlib.h>
typedef struct user {
	char name[20];
	char id[10];
	char pw[10];
	int level;
}User;
void PrintUser(User user) {		// ����ü�� �ڷ����̹Ƿ�, �Ű������� �ڷ����� �ȴ�
	printf("ID : %s\n", user.id);
	printf("PW : ********\n");
	printf("����� �̸� : %s\n", user.name);
	printf("������ ���� : %s\n", user.level == 0 ? "������" : "�Ϲ�");
}
User NewUser() {	// ����ü�� �ڷ����̹Ƿ�, ��ȯ������ ������ �� �ִ�
	User user;	// �Լ����� ������ �� ����ü ������ ����
	printf("���ο� ������ �����մϴ�\n\n");
	printf("������� �̸� : ");	scanf("%s", user.name);
	printf("����� ID : "); scanf("%s", user.id);
	printf("����� PW : "); scanf("%s", user.pw);
	printf("����� ���� (1 : �Ϲ� / 0 : ������) : ");
	scanf("%d", &user.level);
	return user;
}
int main() {
	User user1;	// ���� ����
	printf("���ο� ������ �����մϴ�\n");
	printf("������� �̸� : ");	scanf("%s", user1.name);
	printf("����� ID : "); scanf("%s", user1.id);
	printf("����� PW : "); scanf("%s", user1.pw);
	printf("����� ���� (1 : �Ϲ� / 0 : ������) : ");
	scanf("%d", &user1.level);

	PrintUser(user1);

	User user2 = NewUser();	// admin ������ ���� �����ϱ� !!
	PrintUser(user2);

}