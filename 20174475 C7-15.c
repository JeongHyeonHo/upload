#include<stdio.h>
int main(void) {
	char st;
	int i = 2;
	int j;
	int num;
	printf("출력 문자 수 입력 :");
	scanf_s("%d", &num);

	while (num > 0) {
		j = 1;
		while (j < i) {
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
		num--;
		
	}
	
	printf("	20174475 정현호");
	st = getch();
	return 0;
}