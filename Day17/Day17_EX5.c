#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "banana";
	// char* str[] = "apple";
	
	/*
	int count = 0;
	int size = sizeof(str) / sizeof(char);

	for (int i = 0; i < size; i++) {
		if (str[i] != '\0') {
			// ���� ������ ����
			// ' ', '\0', '\t', '\n': ���ڿ�, ����, tab, enter
			count++;
		}
	}
	*/

	printf("%d", strlen(str));

	return 0;
}