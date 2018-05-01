#include <stdio.h>

int main () {
	
  
	char x = 'w';
	
  
	switch(x)
	{

		case 'w':
			printf("Karakter maju ke depan!\n");
		break;
		
      
		case 's':
			printf("Karakter mundur ke belakang!\n");
		break;
		case 'a':
			printf("Karakter bergerak ke kiri\n");
		break;
		case 'd':
			printf("Karakter begerak ke kanan!\n");
		break;
		default:
			printf("Karakter diam dan tidak bergerak!\n");
	}
}