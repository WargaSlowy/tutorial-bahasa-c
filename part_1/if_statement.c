// if (kondisi) {
//    ....
// }
#include <stdio.h>

int main() {
  // int angka = 10;
  //
  // if (angka > 0) {
  //   printf("angka ini positif\n");
  // }

  // int nilai;
  // printf("masukkan nilai kamu: ");
  // scanf("%d", &nilai);
  //
  // if (nilai % 2 == 0) {
  //   printf("angka yang kamu beri tadi adalah genap!\n");
  // }

  // int nilai = 12;
  //
  // if (nilai > 0) {
  //   if (nilai % 2 == 0) {
  //     printf("angka ini positif dan juga genap\n");
  //   }
  // }

  int umur;

  printf("masukkan umur kamu: ");
  scanf("%d", &umur);

  if (umur < 0) {
    printf("umur kamu salah masukin!\n");
  }

  return 0;
}
