#include <stdio.h>

// ����ü

// cf. �ڷᱸ�� ���� ��, ����ü ���� ���
//     ex) �迭 �迭�� ũ��, �迭 ����Ʈ ���鋚



/* �츮�� ����� ���� �ƽ�Ű�ڵ� ���� */
struct ASCII {		// ����ü(struct): ���� �������� �̿��� ����� DIY �ڷ���, ���� ��Ʈ�� ����� ���� �� ���.
	char abc;		// ������� ���� ����, �ڷ��� ���Ƶ� ��
	int num;
};

int main() {
	struct ASCII a = { 'a', 97 };		// ����ü �� ����
	printf("%c = %d", a.abc, a.num);

	struct ASCII z = { 'z', 122 };
	printf("%c = %d", z.abc, z.num);

	return 0;
}
