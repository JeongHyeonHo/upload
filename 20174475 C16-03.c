#include<stdio.h>

int main(void) {

	char st;
	int Arr[5];
	int i;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 40;
	Arr[4] = 50;

	for (i = 0; i < 5; i++) {

		printf("	Arr[%d] = %d\n",i , Arr[i]);
	}

	st = getch();
	return 0;
	//20174475 Á¤ÇöÈ£
}