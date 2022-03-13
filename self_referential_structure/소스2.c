#include<stdio.h>
#include<stdlib.h>
	// �ڱ� ���� ����ü�� �����Ҵ�
typedef struct student {
	char name[20];
	int kor, eng, mat;
	struct student * next;
} std;

std * newstudent() {
	std * newstd = (std*)malloc(sizeof(std));
	newstd->next = 0;
	printf("�̸� �Է� : ");
	scanf("%s", newstd->name);

	printf("���� �Է� : ");
	scanf("%s", &newstd->kor);

	printf("���� �Է� : ");
	scanf("%s", &newstd->eng);

	printf("���� �Է� : ");
	scanf("%s", &newstd->mat);
	return newstd;
}

void addstudent(std ** list) {
	if (*list == 0)				// ��������� �� �л��� �߰�
		*list = newstudent();
	else						// �� ��������� �������� �̿��ؼ� �ٽ� Ȯ��
		addstudent(&(*list)->next);
}

void showlist(std*list) {
	
	double avg;

	while (list) {
		printf("�̸� : %s, ", list->name);
		avg = ((list->kor) + (list->eng) + (list->mat)) / 3.0;
		printf("��� : %.2lf\n", avg);
		list = list->next;
	}
	printf("\n\n");
}

int main() {
	std * list = 0;
	addstudent(&list);	// ������ ������ �ּҸ� ����
	addstudent(&list);	
	addstudent(&list);	

	showlist(list);
}