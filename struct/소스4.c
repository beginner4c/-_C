// 구조체를 활용한 전화번호부 만들기

#include<stdio.h>
#include<stdlib.h>

typedef struct contact {
	char name[20];
	char pnum[14];	// 전화 번호(010-2222-1111)
} PB;

PB NewPB() {
	PB newpb;							// 새 연락처 변수를 만들고

	printf("새 연락처의 이름 : ");
	scanf("%s", newpb.name);			// 이름 입력받고
	
	printf("새 연락처의 전화번호 : ");
	scanf("%s", newpb.pnum);			// 번호 입력받고
	
	return newpb;						// 값이 준비된 새 연락처를 반환한다
}

void PrintPB(PB pb) {		// 한 명의 연락처를 전달 받아서
	printf("이름 : %s, 전화번호 : %s\n", pb.name, pb.pnum);	// 이름과 번호를 출력
}

int main() {
	
	int menu, num;

	PB list[100];			// 보통은 배열보다 memory allocate 를 사용 한다 (크기가 유동적이지 못하기 때문)

	for (int i = 0; i < 100; i++)
		list[i].name[0] = '\0';

	do {
		system("cls");
		printf("1. 연락처 추가\n2. 연락처 목록 출력\n3. 연락처 삭제\n");
		printf("0. 종료=====================================\n선택 : ");
		scanf("%d", &menu);
		switch (menu) {
		case 1:		// 연락처 추가
			for (int i = 0; i < 100; i++) {			// 전체 중에서
				if (list[i].name[0] == '\0') {		// 이름이 없으면
					list[i] = NewPB();				// 새 연락처를 만들어서 저장
					break;							// 반복을 중단
				}
			}
			break;			// switch ~ case 의 break
		case 2:		// 연락처 목록 출력
			for (int i = 0; i < 100; i++) {
				if (list[i].name[0] != '\0') {
					PrintPB(list[i]);
				}
			}
			break;			// switch ~ case 의 break
		case 3:		// 연락처 삭제
			printf("삭제할 데이터의 순번을 입력 : ");
			scanf("%d", &num);	// 1, 2, 3 ...
			
			list[num - 1].name[0] = '\0';		// 이렇게 하면 위험한 이유는 사용자가 -1 같은 예외적인 숫자를 입력하면 
												// 문제가 발생한다
			break;
		}
	system("pause");
	} while (menu);
}