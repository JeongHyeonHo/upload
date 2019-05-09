#include<stdio.h>
void space(int num,int i) {
	float space = (num - (i))/2;
	space = (int)space;
	while (space > 0) {
		printf(" ");
		space--;
	}

}
int main(void) {
	char st; int i = 1; int j; int k; int num;
	printf("출력 문자 수 입력 : ");
	scanf_s("%d", &num);
	while (i<=num) {
		k = i % 2;
		if (k == 0) {
			i = i + 1;
			continue;
		}
		j = i;
		space(num, i);
			while (j > 0) {
				printf("*");
				j--;
			}
			printf("\n");
			i = i + 1;
		}
	i = num - 1;
	while (i > 0) {
		j = i;
		k = i % 2;
		if (k == 0) {
			i = i - 1;
			continue;
		}
		space(num,i);
		while (j > 0) {
			printf("*");
			j--;
		}
		printf("\n");
		i--;
	}
	printf("\n	20174475 정현호");
	st = getch(); return 0;
	}
