#include<stdio.h>

int main()
{
	int num;
	printf("�� �� ����ġ�� �����ðڽ��ϱ�?(1, 2, 3) : ");
	scanf("%d", &num);

	switch (num) // ����, ������ ������ ����
	{
	case 1:
		printf("���� ON\n");
		break; // break �� �ȳ����� �Ʒ��� ������ ���� �����ϹǷ� �ݵ�� �־��ش�
	case 2:
		printf("���� OFF\n");
		break;
	case 3:
		printf("���� ����\n");
		break;
	case 4:
		printf("����ġ ��ȣ ����\n");
		break;
	}

	return 0;
}