#include<stdio.h>

int main(void) {
	char st; int a; int b; int max; int min; int num = 2; int numm = 2; int mnum1 = 0; int mnum2 = 0;
	printf("�ڿ��� �� ���� �Է��Ͻÿ�\n");
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
	printf("�ִ� ����� : %d\n", max);
	printf("�ִ� ����� : %d\n", min);
	printf("	20174475 ����ȣ");
	st = getch();
	return 0;
}

	