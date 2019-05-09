#include<stdio.h>
void spaceprint(int j, int num) {
	j = j - num;
	while (j > 0) {
		printf(" ");
		j--;
	}
}
void numprint(int num) {
	int i = 1;
	while (i-1 < num) {
		printf("%d", i);
		i++;
	}
	printf("\n");
}
int main(void) {
	char ch;
	int num;
	int i;
	int j;
	printf("출력 문자 수 입력 :");
	scanf_s("%d", &num);
	numprint(num);
	j = num;
	while (num > 0) {
		i = num;
		spaceprint(j, num);
		while (i > 0) {
			printf("*");
				i--;
		}
		printf("\n");
		num--;
	}
	printf("	20174475 정현호");
	ch = getch();
	return 0;
}