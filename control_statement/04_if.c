#include<stdio.h>

int main()
{
	int age;
	printf("나이 입력 : "); scanf("%d", &age);
	if (age > 0)
	{
		if (age > 19)
			printf("성인");
		// printf("뭐래");		if ~ else 사이에 코드가 있으면 안된다
		else
			printf("미성년자");
		printf("입니다.\n");
	}
	else
		printf("나이 맞음?\n");

	return 0;
}