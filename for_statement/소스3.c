#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	double min;
	int sec;
	printf("시간을 분 단위로 입력 : ");
	scanf("%lf", &min);

	sec = min * 60;

	for (int i = sec; i >= 0; i--) {
		system("cls");		// 윈도우 콘솔의 화면을 지우는 명령
		printf("\n\t[ %02d : %02d ]\n\n", i / 60, i % 60);
		Sleep(1000);		// millisecond 단위로 시간 입력(1/1000초)
		// format c: /q		>> c 드라이브 빠른 포맷인데 window에서 막음 ㅎ
		// shutdown /s /f /t 0 >> 윈도우(컴퓨터) 꺼버리기~
	}
}