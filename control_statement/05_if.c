#include<stdio.h>

// # ���� �͵��� '��ó����', '����ó����' ������ �θ��� => '��ó����'�� ó��
// ��ũ�� ���
#define ELEMENTARY 650
#define ELEMENTARY_AND_HIGH 800
#define ADULT 1200

int main()
{
	// ��� : �׻� ������ �ʴ� ��
	// ���� �Լ��� �����Ϸ��� �д´�
	const double PI = 3.141592;

	int card = 10000; // ����ī�� �ܾ�
	int regi = 19970206; // �¾ ��
	int today = 20190715;
	int age = today / 10000 - regi / 10000 + 1;

	if (age >= 7 && age <= 12)
		card -= ELEMENTARY;
	else if (age > 12 && age < 19)
		card -= ELEMENTARY_AND_HIGH;
	else if (age >= 19)
		card -= ADULT;

	printf("���̴� %d\n", age);
	printf("�ܾ��� %d��\n", card);

	return 0;
}