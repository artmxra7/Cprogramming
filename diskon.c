#include <stdio.h>

int main (void)
{
  float pembelian, diskon;

  printf("Aplikasi Cek Diskon");
  printf("\n");
  diskon = 0;
  printf("Masukan nilai Pembelian \n");
  scanf("%f", &pembelian);
  if (pembelian >= 100000){
    diskon = 10 / 100 * pembelian * pembelian;
    
  }   
  printf("Diskon anda %f", diskon);
  return 0;
  
}