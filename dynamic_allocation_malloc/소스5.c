#include<stdio.h>
#include<stdlib.h>

int * getNode() {			// int �� �ּҸ� ��ȯ�ϴ� �Լ� getNode()
	int * p = (int *)malloc(sizeof(int));	// int ������ �����Ҵ� �޾Ƽ�
	printf("���� �Է� : ");
	scanf("%d", p);		// p �� ���� �Է¹ް�
	return p;			// p(�ּҰ�) �� ��ȯ�Ѵ�
}

int main()
{
	int sum = 0;

	int *p1 = getNode();	// ��ȯ�� �ּҰ��� p1 �� ���Եȴ�
	int *p2 = getNode();	// �Լ��� ����Ǿ �����Ҵ��� ������� �ʴ´�

	*p1 += 1;
	*p2 += 2;

	sum = *p1 + *p2;
	printf("sum : %d\n", sum);
}