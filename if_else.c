#include <stdio.h>

int main () {

	int x = 20;
	printf("nilai kamu saat ini %d \n", x);
	if (x > 75)
	{
		
		printf("Selamat, kamu lulus SKBM!\n");
	}
	else
	{
		printf("Maaf, kamu harus ikut ujian remedial :(!\n");
	}

    /*Jika statement dalam percabangan cuma satu baris, bisa kita persingkat jd seperti ini*/
	if (x > 75)
		printf("Selamat, kamu lulus SKBM!\n");
	else
		printf("Maaf, kamu harus ikut ujian remedial :(!\n");
	return 0;
}