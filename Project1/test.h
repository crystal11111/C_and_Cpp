#pragma once

#include <stdio.h>

void enter() {
	// int count = 0;	// �޸𸮿� �ö�
	static int count = 0;		// ��������(static variable): ����� �߰�ȣ�ȿ����� �� �� ����.(���α׷� ����� �޸𸮿��� �����) (�������� + ��������)
	count++;

	printf("���� ������ ȸ���� %d�� �Դϴ�.\n", count);
}	// count�� �޸𸮿��� �����