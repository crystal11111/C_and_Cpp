/*
���������� ���ӻ�
*/

#include <stdio.h>

// int count = 0;	// ������ ���α׷� ����-���� ���� ����

void enter() {
	// int count = 0;	// �޸𸮿� �ö�
	static int count = 0;		// ��������(static variable): ����� �߰�ȣ�ȿ����� �� �� ����.(���α׷� ����� �޸𸮿��� �����) (�������� + ��������)
	count++;

	printf("���� ������ ȸ���� %d�� �Դϴ�.\n", count);
}	// count�� �޸𸮿��� �����

int main() {
	enter();
	enter();

	return 0;
}