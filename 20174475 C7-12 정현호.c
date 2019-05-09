#include<stdio.h>

int main(void) {

	char ch;
	int sum = 0;
	int i;
	int j;
	for (i = 1;i < 101;i++) {
		j = i % 10;
		if (j == 0) {
			printf("%d ", i);
		}
		
		sum = sum + i;
	}
		printf("\n1부터 100까지의 합 = %d\n", sum);
		printf("	20174475 정현호");
		ch = getch();
		return 0;


}