#include<stdio.h>


int main(void) {
	char st;
	int i = 1;
	int sum = 0;
	while (i < 101) {
		int	two = i % 2;
		int three = i % 3;
		int five = i % 5;
		if (two==0&&three==0&&five==0) {		
			printf("100 ������, 2�� 3�� 5�� ����� = %d \n", i);		
		}
		i++;
	}
	printf("	20174475 ����ȣ");
	st = getchar();
	return 0;
}