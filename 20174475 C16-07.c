#include<stdio.h>

#define SIZE 10

int main() {

	char st;
	int Array[SIZE] = { 23, 96, 35, 4 , 132 , 20, 55, 86, 64 , 8 };
	int i, j, index;
	int temp;

	for (i = 0; i < SIZE - 1; i++) { //Array�迭 ������ �ȴ´�.

		index = i; // �ϴ� index�� i���� ī��Ʈ
		for (j = i + 1; j < SIZE; j++) { // i�� �޹�ȣ�鿡 ���� ���
			if (Array[index] > Array[j]) // �޹�ȣ���� �չ�ȣ���� ������
				index = j; // ī��Ʈ�� 1 �ø���
		}
		temp = Array[i];
		Array[i] = Array[index];
		Array[index] = temp;
		
		// i �� index�� ��ġ�� ���� �ٲ۴�
		// �� ���� ���� ��� ī��Ʈ�� index�� Array�� �� �Ȱ��� �� [���� ���� Array ��� ���� ��]�� i�� ��ġ�ٲٱ� �Ѵٴ°�
		}
	printf("	���İ��\n");
	for (i = 0; i < SIZE; i++) {
		printf("	%d\n", Array[i]);
	}
	printf("\n");

	st = getch();
	return 0;
	// 2017 4475 ��ǻ�Ͱ��а� ����ȣ
}