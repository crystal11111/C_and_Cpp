#include <stdio.h>

/*
	3 6 9 ����
	���� �Է�
	3�� ������� '¦'
*/

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) {
			printf("¦");
		}
		else {
			printf("%d", i);
		}
	}
	return 0;
}