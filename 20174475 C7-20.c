#include<stdio.h>

int main(void) {
	char st; int a; int b; int max; int min; int num = 2; int numm = 2; int mnum1 = 0; int mnum2 = 0;
	printf("자연수 두 개를 입력하시오\n");
	scanf_s("%d %d", &a, &b);
	while (numm <= a) {
		while (num <= b) {
			if (a%num == 0 && b%num == 0)
				max = num;
				num++;			
		}		
		numm++;
	}
	mnum1 = a / max;
	mnum2 = b / max;
	min = max*mnum1*mnum2;
	printf("최대 공약수 : %d\n", max);
	printf("최대 공배수 : %d\n", min);
	printf("	20174475 정현호");
	st = getch();
	return 0;
}

	