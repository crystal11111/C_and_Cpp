#include <stdio.h>

int login() {
	static int count = 1;
	printf("���� �α��� Ƚ���� %dȸ �Դϴ�.", count++);
}

int main() {
	
	login();	// ���� �α��� Ƚ���� 1ȸ �Դϴ�.
	login();


	return 0;
}
