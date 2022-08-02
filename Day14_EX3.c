#include <stdio.h>

// Call by Value | Call by Reference
// ������ �Լ� ȣ�� | �ּҰ�(������)���� �Լ� ȣ��
// �Լ� ȣ�� �� �� �Ű������� value(= ��) ���� | �ּҰ� ����  


// Call by Value ����
void changeNum(int a) {		// int a = num;
	a = 7;					// int a = 5;
}

int main() {
	int num = 5;
	changeNum(num);
	printf("%d", num);

	return 0;
}
	
	
// Call by Reference ����
void changeNum(int* a) {	// int* a = &num;
	*a = 7;			
}

int main() {
	int num = 5;
	changeNum(&num);
	printf("%d", num);

	return 0;
}

