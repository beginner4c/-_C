// 2 차원 맵을 만들어서 자유 낙하 및 점프 구현하기
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
// 메인함수 진입 이전에 생성하는 변수 : 전역 변수
// 전역변수는 어떤 함수에서나 접근할 수 잇는 변수이다
// 전역변수와 달리, 특정 함수에서만 접근 가능한 변수를 [지역변수]라고 한다

int map[10][10] = { 0 };
int x = 0, y = 0;

void PrintMap() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (x == i && y == j) printf("＊");			// ㅁ의 특수기호
			printf("%s", (map[i][j]) ? "▩" : "  ");	// 삼항 연산자에 따로 조건을 지정하지 않으면 != 0 가 들어간다
		} printf("\n");									// ㅁ의 특수기호
	} printf("\n");
}

int main() {
	for (int i = 0; i < 10; i++) 
			map[9][i] = 1;			// 맨 아랫줄만 값을 1 로 초기화
		
	int input = 0;
	
	do {
		PrintMap();					// 변경된 위치를 새로 출력하고
		if (map[x + 1][y] == 0) {	// 아랫칸이 값이 0이면 (비어있으면)
			x++;					// 세로 좌표값을 1 증가시키고 (한칸 내리고)
			Sleep(250);				// 0.35 초의 대기시간을 가진다 (Windows.h 가 있어야 한다)
		}
		else {
			input = getch();
		/*
			getch() 함수는 엔터 키 없이 사용자의 키 입력을 변수에 저장하는 함수
			27 : ESC
			방향키 : 72, 75, 77, 80
		*/
			switch(input){
			case 72:				//printf("%d\n", input); 위 방향키
				for (int i = 0; i < 3; i++) {
					x -= (map[x - 1][y] ? 0 : 1);	// 좌표 수정
					system("cls");					// 화면 초기화
					PrintMap();						// 맵 출력
					Sleep(250);						// 지연시간
				}
				break;
			case 75:				//printf("%d\n", input); 왼쪽 방향키
				y -= (map[x][y - 1]) ? 0 : 1;
				break;
			case 77:				//printf("%d\n", input); 우측 방향키
				y += (map[x][y + 1]) ? 0 : 1;
				
				break;
			case 80:				//printf("%d\n", input); 아래 방향키
				break;
			}
		}
		system("cls");				// 화면 지우고
	} while (input != 27);			// 27 : ESC 키의 ASCII 코드


}