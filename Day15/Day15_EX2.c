#include <stdio.h>
#include <stdlib.h>	// ���̺귯��

int main() {
	int n;			// ����, �迭�� ����
	scanf_s("%d", &n);

	int* arr = malloc(n * sizeof(int));		// �����Ҵ�(memory allocation)
			// �迭 ùĭ�� �ּ�
	// =int arr[n];	

	for (int i = 0; i<n; i++) {
		arr[i] = (i+1) * 100;
		printf("%d\n", arr[i]);
	}

	free(arr);	// �޸𸮿��� �����

		
	return 0;
}

// ������ �����ϸ� ��ǻ�Ͱ� ��� ����?
// �޸� RAM
// - �ڵ念��: �ڵ�����
// - �����Ϳ���: ����, ���� ����
// - ���� ����: ��������, �Ű�����
// - �� ����: �����ڰ� �����Ҵ�(memory allocation) �� �� ����ϴ� ����
