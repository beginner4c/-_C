#include<stdio.h>
#include<stdlib.h>
	// 자기 참조 구조체와 동적할당
typedef struct student {
	char name[20];
	int kor, eng, mat;
	struct student * next;
} std;

std * newstudent() {
	std * newstd = (std*)malloc(sizeof(std));
	newstd->next = 0;
	printf("이름 입력 : ");
	scanf("%s", newstd->name);

	printf("국어 입력 : ");
	scanf("%s", &newstd->kor);

	printf("영어 입력 : ");
	scanf("%s", &newstd->eng);

	printf("수학 입력 : ");
	scanf("%s", &newstd->mat);
	return newstd;
}

void addstudent(std ** list) {
	if (*list == 0)				// 비어있으면 새 학생을 추가
		*list = newstudent();
	else						// 안 비어있으면 다음값을 이용해서 다시 확인
		addstudent(&(*list)->next);
}

void showlist(std*list) {
	
	double avg;

	while (list) {
		printf("이름 : %s, ", list->name);
		avg = ((list->kor) + (list->eng) + (list->mat)) / 3.0;
		printf("평균 : %.2lf\n", avg);
		list = list->next;
	}
	printf("\n\n");
}

int main() {
	std * list = 0;
	addstudent(&list);	// 포인터 변수의 주소를 전달
	addstudent(&list);	
	addstudent(&list);	

	showlist(list);
}