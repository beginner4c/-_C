#include<stdio.h>
#include<stdlib.h>		// malloc(), free() �� �Լ��� ������ �ִ�

// ���� �Ҵ��� ����

int main()
{
	int *p = (int *)malloc(sizeof(int));		// ���� �Ҵ� ��û
	*p = 10;
	printf("*p : %d\n", *p);
	free(p);									// ���� �Ҵ� ����
	printf("*p : %d\n", *p);
}