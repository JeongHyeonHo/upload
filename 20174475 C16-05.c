#include<stdio.h>

int main(void) {


	char st;
	int ages[5];
	int tot = 0;
	double average;
	int i;

	printf("다섯 명의 나이를 입력하세요 \n\n");
	for (i = 0;i < 5;i++) {
		scanf_s("%d", &ages[i]);
	}
	for (i = 0;i < 5;i++) {
		tot += ages[i];
	}
	average = tot / 5.0;

	printf("입력된 다섯 명의 나이 : %d %d %d %d %d\n\n", ages[0], ages[1], ages[2], ages[3], ages[4]);
	printf("	평균 나이 : %lf ", average);

	st = getch();
	return 0;

	//20174475 컴퓨터공학과 정현호
}