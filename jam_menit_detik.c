#include <stdio.h>
#include <conio.h>

int main () {

	int jam, menit, detik;
	int lower, upper, step;

	lower = 1;
	upper = 24;
	step = 1;

	jam = lower;
	printf("Jam \t Menit \t detik \n");
	while (jam <= upper){
		menit = jam*60;
		detik = menit*60;
		printf("%d\t%d\t%d\n", jam, menit, detik);
		jam = jam + step;
		

	}
	
}
