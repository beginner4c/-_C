// ����ü�� ũ��

#include<stdio.h>
#include<stdlib.h>

typedef struct test {
	char ch;
	int num;
	char word[14];
	double db;
}Test;

int main()
{
	int size;

	printf("����ü Test�� ũ��� �� byte �ΰ� : ");
	scanf("%d", &size);

	printf("%s\n", size == sizeof(Test) ? "����" : "����");
	// ��� ���� 27 byte�� �ƴ� 32 byte �� �����µ�
	// �̴� ����ü Test�� �����ڷ��� �� ���� ū �ڷ�����
	// double(8 byte)�� �������� ����ü�� ũ�⸦ �Ҵ��ϱ� �����̴�
	// 8 / 16 / 24 / 32 ~~ �̷��� �Ҵ�ȴٴ� �ǹ� �̴�
	// �̷��� ä���־��� 5 byte�� padding byte ��� �Ѵ�
}