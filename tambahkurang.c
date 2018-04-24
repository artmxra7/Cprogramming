#include <stdio.h>
#include <conio.h>

int a,b,c;

int main()
{
	printf("Masukan Angka");
	scanf("%i", &a);
	printf("Masukan Angka ke Dua");
	scanf("%i", &b);
	c=a+b;
	printf("Hasil Penambahan %i+%i=%i", a,b,c);
	getch();
	return 0;
}