#include <stdio.h>

/*
���� 1�� �Է�
�Է°����� �۰ų� ���� ¦������ �� ���Ѱ��� 
������ּ���.
*/


int main() {
	int num = 5;
	int sum = 0; 

	for (int i = 1; i * 2 <= num; i++) {
		sum = sum + i * 2;
	}

	/* �ι��� ���
	for (int i = 2; i <= num; i = i + 2) {
		sum += i;
	}
	*/

	/* ������ ���
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	*/
		
	printf("%d", sum);
	return 0;
}

