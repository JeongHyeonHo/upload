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
		printf("\n1���� 100������ �� = %d\n", sum);
		printf("	20174475 ����ȣ");
		ch = getch();
		return 0;


}