#include<stdio.h>

#define MAX_STU 3 //��ũ�� ���.

int main(void) {

	char stp;
	int tsu[MAX_STU];
	int i;
	int First_Score = 0;
	int Second_Score = 0;

	for (i = 0; i < MAX_STU; i++) {

		printf("%d ù��° �л��� ���� : ", i + 1);
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
		printf("%d ��° �л��� ���� : %d \n\n", i + 1, tsu[i]);
	}

	printf("	1�� �л� ���� : %d \n	2�� �л� ���� : %d\n\n", First_Score, Second_Score);
	printf("	20174475 ��ǻ�� ���а� ����ȣ ");

	stp = getch();
	return 0;
	
}