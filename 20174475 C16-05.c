#include<stdio.h>

int main(void) {


	char st;
	int ages[5];
	int tot = 0;
	double average;
	int i;

	printf("�ټ� ���� ���̸� �Է��ϼ��� \n\n");
	for (i = 0;i < 5;i++) {
		scanf_s("%d", &ages[i]);
	}
	for (i = 0;i < 5;i++) {
		tot += ages[i];
	}
	average = tot / 5.0;

	printf("�Էµ� �ټ� ���� ���� : %d %d %d %d %d\n\n", ages[0], ages[1], ages[2], ages[3], ages[4]);
	printf("	��� ���� : %lf ", average);

	st = getch();
	return 0;

	//20174475 ��ǻ�Ͱ��а� ����ȣ
}