#include <stdio.h>

/*
정수 1개 입력
涝仿蔼焊促 累芭唱 鞍篮 娄荐甸阑 促 歹茄蔼阑 
免仿秦林技夸.
*/


int main() {
	int num = 5;
	int sum = 0; 

	for (int i = 1; i * 2 <= num; i++) {
		sum = sum + i * 2;
	}

	/* 滴锅 规过
	for (int i = 2; i <= num; i = i + 2) {
		sum += i;
	}
	*/

	/* 技锅 规过
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	*/
		
	printf("%d", sum);
	return 0;
}

