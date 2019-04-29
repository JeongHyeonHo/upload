#include<stdio.h>

#define MAX 5

int main(void) {

	char st;
	int Arr[MAX] = { 0 }; 
	int i;
	int sum = 0;
	double average;

	printf("%d 개의 정수를 입력하시오\n", MAX);
	for (i = 0; i < MAX; i++) {
		scanf_s("%d", &Arr[i]);
	}
	for (i = 0; i < MAX; i++) {
		sum += Arr[i];
	}

	average = (double)sum / (double)MAX; //명시적 형변환
	printf("	합계 : %d \n	평균 %5.2f\n", sum, average); // %5.2f  = 5 정수자리 개수 . = 소숫점 2 = 두자리까지
	st = getch();
	return 0; // 20174475 컴퓨터공학과 정현호

}