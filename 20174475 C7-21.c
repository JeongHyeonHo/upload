#include<stdio.h>
int main(void) {
	char alpbt[] = "abcdefghifklmnopqrstuvwxymz";
	char st;
	int i = 0;
	int alpbtsize = sizeof(alpbt);
	while (alpbtsize > 0) {
		printf(" %c ", alpbt[i]);
		i++;
		alpbtsize--;
		if (alpbt[i] == 'l'){
			printf(" l ");
			break;
		}
	}
	printf("\n\n	20174475 Á¤ÇöÈ£");
	st = getch();
	return 0;
}