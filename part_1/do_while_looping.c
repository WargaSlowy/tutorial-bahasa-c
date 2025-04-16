// do {
//  ...
// } while (kondisi);
#include <stdio.h>

int main() {
  // int angka = 1;
  //
  // do {
  //   printf("angka sekarang adalah: %d\n", angka);
  //   angka++;
  // } while (angka <= 5);

  int angka;
  do {
    printf("masukkan angka positif: ");
    scanf("%d", &angka);
    if (angka <= 0) {
      printf("hey input enggak valid, harus angka positif\n");
    }
  } while (angka <= 0);
  return 0;
}
