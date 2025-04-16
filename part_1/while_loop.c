// while (kondisi) {
//    ....
// }
#include <stdio.h>

int main() {
  // int angka = 1;
  //
  // while (angka <= 5) {
  //   printf("sekarang angka ke: %d\n", angka);
  //   angka++;
  // }

  // int angka;
  //
  // printf("masukkan angka (0 untuk keluar): ");
  // scanf("%d", &angka);
  //
  // while (angka != 0) {
  //   printf("kamu tadi memasukkan angka: %d\n", angka);
  //   printf("masukkan angka (0 untuk keluar): ");
  //   scanf("%d", &angka);
  // }
  // printf("kamu keluar dari program\n");

  int i = 1;
  int total = 0;

  while (i <= 10) {
    total += i;
    i++;
  }
  printf("jumlah angka dari 1 sampe 10 adalah: %d\n", total);
  return 0;
}
