#include<stdio.h>
int main(void) {
	char st;
	int num;
	int i = 1;
	int j = 2;
	int save;
	printf("��� ���� �� �Է� : ");
	scanf_s("%d", &num);
	save = num;

	while (num != j) {
		i = 1;
		while (i < j) {
			printf("*");
			i++;
		}
		printf("\n");
		j++;

	}
	while (num > 0) {
		i = num;
		j = 1;
		while (j < i) {
			printf("*");
			j++;
		}
		printf("\n");
		num--;
	}

	printf("	20174475 ����ȣ");
	st = getch();
	return 0;

}