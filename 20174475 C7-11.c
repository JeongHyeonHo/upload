#include<stdio.h>

int main(void) {

	char ch;
	int i = 0;
	int sum = 1;
	printf("구하려고 하는, Factorial 수 입력 : ");
	scanf_s("%d", &i);

	for (i;i > 0;i--) {
		sum = sum * i;
		if (i == 1) {
			printf("1 = %d \n" , sum);
		}
		if (i != 1) {
			printf("%d * ", i);
		}

	}
	printf("	20174475 정현호");
	ch = getch();
	return 0;
}