#include<stdio.h>

int main()
{
	int num;
	printf("몇 번 스위치를 누르시겠습니까?(1, 2, 3) : ");
	scanf("%d", &num);

	switch (num) // 정수, 문자형 변수만 가능
	{
	case 1:
		printf("전등 ON\n");
		break; // break 를 안넣으면 아래의 문장을 전부 실행하므로 반드시 넣어준다
	case 2:
		printf("전등 OFF\n");
		break;
	case 3:
		printf("전등 고장\n");
		break;
	case 4:
		printf("스위치 번호 오류\n");
		break;
	}

	return 0;
}