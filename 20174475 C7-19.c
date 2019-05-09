#include<stdio.h>
int main(void) {
	char st = 0;
	int i;
	int San;
	int Go;
	printf("ㅡㅡㅡfor 문 사용ㅡㅡㅡㅡㅡㅡㅡ\n");
	for (i = 1;i <= 20;i++) {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
	}
	printf("\n\nㅡㅡㅡwhile문 사용ㅡㅡㅡㅡㅡㅡ\n\n");
	i = 1;
	while (i <= 20) {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
		i++;
	}
	i = 1;
	printf("\n\nㅡㅡㅡdo while문 사용ㅡㅡㅡㅡㅡㅡ\n\n");
	do {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
		i++;
	} while (i <= 20);
	
	printf("\n	20174475 정현호");
	st = getch();
	return 0;
}