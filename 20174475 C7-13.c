#include<stdio.h>


int printfunc(int num) {

	while (num > 0) {
		printf("*");
		num--;
	}
}
int space(int j) {
	float num = 3.5 - (0.5 * j);
	num = (int)num;
	while (num > 0) {
		printf(" ");
		num--;
	}
}
int main(void) {
	char ch;
	int i;
	int j;
	int k;
	for (i = 0; i < 3 ; i++) {
		for (j = 1;j<8;j ++) {
			k = j % 2;
			if (k == 0)
				continue;
			space(j);
			printfunc(j);
			printf("\n");
		}
	}

	printf("	20174475 Á¤ÇöÈ£");
	ch = getch();
	return 0;
}