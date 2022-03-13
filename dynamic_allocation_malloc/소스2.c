#include<stdio.h>
#include<stdlib.h>	// malloc() �Լ�, free () �Լ��� �����ϴ� ��� ����

int main()
{

	/*
	Code : ���α׷��� ������ �۾��� �����ϴ� �޸� ����
	Data : ���� ����, Static ����, ����� ����Ǵ� ����
	Heap : ���� �Ҵ翡 ���Ǵ� �޸� ���� (���� ���� ������� �ʾƼ� �̸��� ����)
	Stack : �Լ��� �׾ƿ÷����鼭 ó���ϰ�, �Լ� ���� ���� ������ �����ϴ� ����
*/

	// ����1 : num ������ ������ �Է¹޾Ƽ�, 1 ���� num ������ ���� ����ϴ� �ڵ�

	int num, sum = 0;

	printf("���� �Է� : ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("�Է� ���� ���� ���� %d �Դϴ�\n\n", sum);

	// ���� 2 : ����ڿ��� �ݺ��Ͽ� ������ �Է� �޾� 0 �� �Է��ϱ� �������� ���� ���
	do {
		printf("���� �Է�(0�� �Է��ϸ� ����) : ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("�Է��� ���� �հ�� %d �Դϴ�\n", sum);

	// ���� 3 : ����ڿ��� �ݺ��Ͽ� ������ �Է¹ް� �� ����� �ٽ� ����ϴ� �ڵ�

	int length;
	
	printf("�ʿ��� ������ ������ �Է� : ");
	scanf("%d", &length);

	int * p = malloc(length);	// ���� �Ҵ��� �����ϴ� �Լ�
								// malloc : Memory Allocation
								// �⺻ ������ ���� : malloc(���������� ����Ʈ)

	for (int i = 0; i < length; i++) {
		printf("���� �Է� : ");
		scanf("%d", &p[i]);
	} printf("\n");

	printf("��� ��� : ");
	for (int i = 0; i < length; i++) {
		printf("%d ", p[i]);
	} printf("\n\n");

}