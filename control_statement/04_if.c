#include<stdio.h>

int main()
{
	int age;
	printf("���� �Է� : "); scanf("%d", &age);
	if (age > 0)
	{
		if (age > 19)
			printf("����");
		// printf("����");		if ~ else ���̿� �ڵ尡 ������ �ȵȴ�
		else
			printf("�̼�����");
		printf("�Դϴ�.\n");
	}
	else
		printf("���� ����?\n");

	return 0;
}