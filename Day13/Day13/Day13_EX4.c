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