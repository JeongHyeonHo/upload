#include<stdio.h>

#define MAX 5

int main(void) {

	char st;
	int Arr[MAX] = { 0 }; 
	int i;
	int sum = 0;
	double average;

	printf("%d ���� ������ �Է��Ͻÿ�\n", MAX);
	for (i = 0; i < MAX; i++) {
		scanf_s("%d", &Arr[i]);
	}
	for (i = 0; i < MAX; i++) {
		sum += Arr[i];
	}

	average = (double)sum / (double)MAX; //����� ����ȯ
	printf("	�հ� : %d \n	��� %5.2f\n", sum, average); // %5.2f  = 5 �����ڸ� ���� . = �Ҽ��� 2 = ���ڸ�����
	st = getch();
	return 0; // 20174475 ��ǻ�Ͱ��а� ����ȣ

}