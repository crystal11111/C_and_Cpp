#include <stdio.h>

struct Student {
	char name[10];
	int age;
};

int main() {

	struct Student stu1 = { 'john' };
	printf("%s, %d, stu1.name, stu1.age");

	return 0;
}


struct Student {
	char name[10];
	int kor;
	int eng;
	int math;
	int avg;
};

int main() {

	struct Student stu[5];

	scanf_s("%s", stu[0].name, 10);
	scanf_s("%d %d %d", &stu[0].kor, &stu[0].eng, &stu[0].math, 10);
	scanf_s("%s", stu[1].name, 10);
	scanf_s("%d %d %d", &stu[1].kor, &stu[1].eng, &stu[1].math, 10);
	scanf_s("%s", stu[2].name, 10);
	scanf_s("%d %d %d", &stu[2].kor, &stu[2].eng, &stu[2].math, 10);
	scanf_s("%s", stu[3].name, 10);
	scanf_s("%d %d %d", &stu[3].kor, &stu[3].eng, &stu[3].math, 10);
	scanf_s("%s", stu[4].name, 10);
	scanf_s("%d %d %d", &stu[4].kor, &stu[4].eng, &stu[4].math, 10);

	avg = (float)(kor + eng + math) / 3;

	struct Student top_student = (max)(int avg);
	printf("%s %d", top_student.name);

	return 0;
}

/** 예제 정답풀이 **/


#include <stdio.h>

// 평균 값이 가장 높은 사람 이름 출력

struct Student {
	char name[10];
	int kor;
	int eng;
	int math;
	int avg;
};

int main() {

	struct Student stu[5];

	int maxIndex = 0;

	for (int i = 0; i < 5; i++) {	// 학생 정보 입력
		scanf_s("%s", stu[i].name, 10);		// 이름, 10 -> 칸 
		scanf_s("%d %d %d", &stu[i].kor, &stu[i].eng, &stu[i].math, 10);	// 국영수 점수
		
		stu[i].avg = (stu[i].kor + stu[i].eng + stu[i].math) / 3;

		if (stu[maxIndex].avg < stu[i].avg) {
			maxIndex = i;
		}
	}

	// 각 학생의 평균값 계산
	// 입력값 최대값과 비교
	// 큰 값 MAX 처리

	printf("%s", stu[maxIndex].name);


	return 0;
}
