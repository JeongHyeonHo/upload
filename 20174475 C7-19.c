#include<stdio.h>
int main(void) {
	char st = 0;
	int i;
	int San;
	int Go;
	printf("�ѤѤ�for �� ���ѤѤѤѤѤѤ�\n");
	for (i = 1;i <= 20;i++) {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
	}
	printf("\n\n�ѤѤ�while�� ���ѤѤѤѤѤ�\n\n");
	i = 1;
	while (i <= 20) {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
		i++;
	}
	i = 1;
	printf("\n\n�ѤѤ�do while�� ���ѤѤѤѤѤ�\n\n");
	do {
		San = i % 3;
		Go = i % 5;
		if (San != 0 && Go != 0)
			printf("%d,  ", i);
		i++;
	} while (i <= 20);
	
	printf("\n	20174475 ����ȣ");
	st = getch();
	return 0;
}