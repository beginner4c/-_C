#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	double min;
	int sec;
	printf("�ð��� �� ������ �Է� : ");
	scanf("%lf", &min);

	sec = min * 60;

	for (int i = sec; i >= 0; i--) {
		system("cls");		// ������ �ܼ��� ȭ���� ����� ���
		printf("\n\t[ %02d : %02d ]\n\n", i / 60, i % 60);
		Sleep(1000);		// millisecond ������ �ð� �Է�(1/1000��)
		// format c: /q		>> c ����̺� ���� �����ε� window���� ���� ��
		// shutdown /s /f /t 0 >> ������(��ǻ��) ��������~
	}
}