#include<stdio.h>

int main(void) {

	char ch;
	int i = 0;
	int sum = 1;
	printf("���Ϸ��� �ϴ�, Factorial �� �Է� : ");
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
	printf("	20174475 ����ȣ");
	ch = getch();
	return 0;
}