#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "apple";
	char b[] = "applepppppppp";

	/*
	// b 같은 상황일때 처리하는 법 if 써서 풀어보기 & 메일
	int isSame = 1;
	for (int i = 0; i < 6; i++) {
		if (a[i] != b[i]) {
			isSame = 0;
			break;
		}
	}
	*/
	
	// 답
	isSame = strcmp(a, b);		// 0이 나오면 같다는 뜻
	if (strlen(a) == strlen(b)) {
		for (int i = 0; i < 6; i++) {
			if (a[i] != b[i]) {
				isSame = 0;
				break;
			}
		}
	}

	int n1 = 5;
	int n2 = 5;

	if (n1 == n2) {
		printf("n1 == n2\n");
	}

	if (n1 == 5) {
		printf("n1 == 5\n");
	}

	if (a == "apple") {
		printf("a == apple\n");
	}

	if (a[0] == b[0]) {
		printf("a[0] == b[0]\n");
	}

	if (a == b) {	// &a[0] == &b[0] X
		printf("a==b\n");
	}

	printf("%p\n", "apple");

	return 0;
}
