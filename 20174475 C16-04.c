#include<stdio.h>

int main(void) {

	char st;
	int Arr[5];
	int i;

	Arr[0] = 10; Arr[1] = 20; Arr[2] = 30; Arr[3] = 40; Arr[4] = 50;

	for (i = 0; i < 5; i++) {
		printf("%d번째에 저장된 값 : %d \n", i + 1, Arr[i]);
	}

	st = getch();
	return 0; // 20174475 컴퓨터 공학과 정현호
}