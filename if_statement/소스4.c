/*
������ �ٴϴ� �ð�����
������ �ִ���
ī�尡 �ִ���

������ �ٴϴ� �ð��̰�, ���� Ȥ�� ī�尡 ������ ����
������ �ٴϴ� �ð��� �ƴ� ��
	������ 1200 �� �̻��̰ų� ī�尡 ������ �ý�
	������ 1200 �� �̸��̰�, ���ÿ� ī�嵵 ������ �ѹ���
*/
#include <stdio.h>

int main()
{
	int bus, cash;
	char card;

	printf("������ �� ���ΰ� : ");
	scanf("%d", &bus);
	printf("�� �� �ִµ�? : ");
	scanf("%d", &cash);
	printf("ī��� ������ �ְ�? (Y/N) : ");
	scanf("%c", &card); scanf("%c", &card);

	if (bus >= 6 && bus <= 23) {
		if (cash > 1200 || card == 'Y')
			printf("\n���� Ÿ�� ���� �׳�\n");
	}

	else if (bus < 6 || bus > 23) {
		if (cash >= 12000 || card == 'Y')
			printf("\n�� ����? �ý� Ÿ�� ����\n");
		else
			printf("\n�ɾ�� �� ���� �ѹ���\n");
	}
}