#include <stdio.h>
#include <conio.h>

int main () {

	int jam, menit;
	int lower, upper, step;

	lower = 0;
	upper = 24;
	step = 1;

	jam = lower;
	printf("Jam \t Menit\n");
	while (jam <= upper){
		menit = jam*60;
		printf("%d\t%d\n", jam, menit);
		jam = jam + step;
	}
}