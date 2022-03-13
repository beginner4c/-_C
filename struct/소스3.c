// 구조체의 멤버 변수에 입력받기
#include<stdio.h>
#include<stdlib.h>
typedef struct user {
	char name[20];
	char id[10];
	char pw[10];
	int level;
}User;
void PrintUser(User user) {		// 구조체가 자료형이므로, 매개변수의 자료형이 된다
	printf("ID : %s\n", user.id);
	printf("PW : ********\n");
	printf("사용자 이름 : %s\n", user.name);
	printf("관리자 여부 : %s\n", user.level == 0 ? "관리자" : "일반");
}
User NewUser() {	// 구조체가 자료형이므로, 반환형으로 지정할 수 있다
	User user;	// 함수에서 생성한 빈 구조체 형식의 변수
	printf("새로운 계정을 생성합니다\n\n");
	printf("사용자의 이름 : ");	scanf("%s", user.name);
	printf("사용할 ID : "); scanf("%s", user.id);
	printf("사용할 PW : "); scanf("%s", user.pw);
	printf("등급을 지정 (1 : 일반 / 0 : 관리자) : ");
	scanf("%d", &user.level);
	return user;
}
int main() {
	User user1;	// 변수 선언
	printf("새로운 계정을 생성합니다\n");
	printf("사용자의 이름 : ");	scanf("%s", user1.name);
	printf("사용할 ID : "); scanf("%s", user1.id);
	printf("사용할 PW : "); scanf("%s", user1.pw);
	printf("등급을 지정 (1 : 일반 / 0 : 관리자) : ");
	scanf("%d", &user1.level);

	PrintUser(user1);

	User user2 = NewUser();	// admin 관리자 계정 생성하기 !!
	PrintUser(user2);

}