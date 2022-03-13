#include<stdio.h>
#include<stdlib.h>

typedef struct student {
	char * name;
	int kor, eng, mat;
	struct student * next;
}std;

int main() {
	std * st1 = (std *)malloc(sizeof(std));
	std st2;

	st1->name = "±èÈñÃ¶";
	st1->kor = 100;
	st1->eng = 99;
	st1->mat = 87;
	
	double avg = ((st1->kor) + (st1->eng) + (st1->mat)) / 3.0;
	printf("ÀÌ¸§ : %s, Æò±Õ : %.2lf\n", st1->name, avg);

	st2.name = "ÀÌÁöÀº";
	st2.kor = 77;
	st2.eng = 99;
	st2.mat = 60;

	double avg2 = (st2.kor + st2.eng + st2.mat) / 3.0;
	printf("ÀÌ¸§ : %s, Æò±Õ : %.2lf\n", st2.name, avg2);

	st1->next = &st2;

	printf("%s\n", st1->next->name);
}