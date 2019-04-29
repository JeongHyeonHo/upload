#include<stdio.h>

#define MAX_STU 3 //매크로 상수.

int main(void) {

	char stp;
	int tsu[MAX_STU];
	int i;
	int First_Score = 0;
	int Second_Score = 0;

	for (i = 0; i < MAX_STU; i++) {

		printf("%d 첫번째 학생의 점수 : ", i + 1);
		scanf_s("%d", &tsu[i]);



		if (tsu[i] > First_Score) {
			Second_Score = First_Score;
			First_Score = tsu[i];
		}

		else if (tsu[i]<First_Score && tsu[i]>Second_Score) {
			Second_Score = tsu[i];
		}

	}
	printf("\n\n");

	for (i = 0; i < MAX_STU; i++) {
		printf("%d 번째 학생의 점수 : %d \n\n", i + 1, tsu[i]);
	}

	printf("	1등 학생 점수 : %d \n	2등 학생 점수 : %d\n\n", First_Score, Second_Score);
	printf("	20174475 컴퓨터 공학과 정현호 ");

	stp = getch();
	return 0;
	
}