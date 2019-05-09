#include<stdio.h>

#define SIZE 10

int main() {

	char st;
	int Array[SIZE] = { 23, 96, 35, 4 , 132 , 20, 55, 86, 64 , 8 };
	int i, j, index;
	int temp;

	for (i = 0; i < SIZE - 1; i++) { //Array배열 전역을 훑는다.

		index = i; // 일단 index가 i값을 카운트
		for (j = i + 1; j < SIZE; j++) { // i의 뒷번호들에 대한 명령
			if (Array[index] > Array[j]) // 뒷번호들이 앞번호보다 작으면
				index = j; // 카운트를 1 늘린다
		}
		temp = Array[i];
		Array[i] = Array[index];
		Array[index] = temp;
		
		// i 와 index의 위치를 서로 바꾼다
		// 즉 작은 값을 계속 카운트한 index가 Array를 싹 훑고나서 얻어낸 [가장 작은 Array 배녈 내의 값]을 i와 위치바꾸기 한다는거
		}
	printf("	정렬결과\n");
	for (i = 0; i < SIZE; i++) {
		printf("	%d\n", Array[i]);
	}
	printf("\n");

	st = getch();
	return 0;
	// 2017 4475 컴퓨터공학과 정현호
}