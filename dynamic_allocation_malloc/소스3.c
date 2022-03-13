#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p1 = malloc(4);		// 4 ����Ʈ ũ���� ������ �Ҵ��ϰ� �� �ּҸ� p1�� ����
	int *p2 = malloc(sizeof(int));		// p1 �� �����ϴ�
	int *p3 = (int *)malloc(sizeof(int));	// p1, p2 �� ���������� int �� �����ͷ� ��ȯ

	// sizeof(�ڷ���, ����, ���) : ������ byte ũ�⸦ �˷��ִ� ������

	// malloc �� void * malloc(int t_size) �� ���ǵǾ� �ִ�
	// ���°� �������� ���� �ּҰ��� ��ȯ�ϰ�,
	// �Ű��������� �������� �޸� ����Ʈ ũ�⸦ ���޹޴´�

	// �ܼ��ϰ� ���ϸ� ���� �Ҵ��� ���� �����̴�
	// ��, stack ������ �ƴ� heap ������ ����� ���̰�, ���� �̸� ��� �ּҸ� ����Ѵٴ� ���� �ٸ���

	// ���� 1. ������ ������ �����Ҵ��ϰ�, 10�� �����ؼ� ����ϱ�

	int *n1 = (int *)malloc(sizeof(int));
	*n1 = 10;
	printf("*n1 = %d\n", *n1);

	// ���� 2. double �� ������ ���� �Ҵ��ϰ�, scanf() �� �Է¹��� ���� ����ϱ�

	double *d1 = (double *)malloc(sizeof(double));
	printf("�Ǽ� �Է� : ");
	scanf("%lf", d1);
	printf("�Է��� �Ǽ��� %.2lf\n", *d1);

	// ���� 1. char �� ������ 20 �� �����Ͽ� �� �������� pname �� �����ϰ�,
	// ������ ������ scanf()�� �Է¹޾Ƽ� ����ϼ���

	char *pname = (char *)malloc(sizeof(char)*20);	// �迭�� ������ ����
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", pname);			// scanf(Format, Address);
	printf("�̸��� %s �Դϴ�\n", pname);

	// char name[20];		// �迭�� �̸��� �ּ�, �������� ���� �ּ�
	// scanf("%s", name);
	//printf("�̸��� %s�Դϴ�\n", name);

	// ���� 2. 3 ���� ������ ������ ���� �Ҵ��ϰ�, scanf() �Է¹ް�
	// �� ���� ���Ͽ� ����ϼ��� (�迭, �Ϲݺ���)

	int *c1 = (int *)malloc(sizeof(int)*3);
	int total = 0;

	for (int i = 0; i < 3; i++) {
		printf("%d ������ �Է��ϼ��� : ", i + 1);
		scanf("%d", &c1[i]);
		total += c1[i];
	}
	printf("�� ������ ���� : %d\n", total);
}