#include<stdio.h>
int main(void) {
	char st; int sum = 0; double n; int i; double result = 0;
	for (i = 1;i < 101;i++) {
		sum = sum + i;
//		printf("%d\n", sum);
		n = (double)1 / (sum);
//		printf("%lf\n",n);
		result = result + n;
	}
	printf("합계 : %lf\n", result);
	printf("	20174475 정현호");
	st = getch();
	return 0;
}