#include<stdio.h>
#include<conio.h>

int main(void) {

	int st1, st2, st3;
	int FHighScore = 0;
	int SHighScore = 0;
	char st;

	printf("���� �Է�: ");
	scanf_s("%d", &st1);

	if (st1 >= FHighScore) {
		SHighScore = FHighScore;
		FHighScore = st1;
	}
	else if (st1<FHighScore && st1 > SHighScore) {
		SHighScore = st1;
	}
	printf("���� �Է� : ");
	scanf_s("%d", &st2);


	if (st2 >= FHighScore) {
		SHighScore = FHighScore;
		FHighScore = st2;
	}
	else if (st2<FHighScore && st2 > SHighScore) {

		SHighScore = st2;
	}


	printf("���� �Է� : ");
	scanf_s("%d", &st3);

	if (st3 >= FHighScore) {
		SHighScore = FHighScore;
		FHighScore = st3;
	}
	else if (st3<FHighScore && st3 > SHighScore) {

		SHighScore = st3;
	}
	printf("\n");
	printf("A������%d �̻� �Ǿ�� �մϴ�. \n", SHighScore);

	st = _getch();

	return 0;
	//20174475 ����ȣ
}
