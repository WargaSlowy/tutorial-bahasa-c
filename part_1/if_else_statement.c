// if (kondisi) {
// .....
// } else {
//   .....
// }
#include <stddef.h>
#include <stdio.h>

int main() {
  // int angka = 20;
  //
  // if (angka > 0) {
  //   printf("angka yang kamu berikan adalah positif\n");
  // } else {
  //   printf("angka yang kamu berikan adalah negatif\n");
  // }

  // int nilai;
  // printf("masukkan angka yang kamu inginkan: ");
  // scanf("%d", &nilai);
  //
  // if (nilai % 2 == 0) {
  //   printf("angka yang kamu berikan adalah genap\n");
  // } else {
  //   printf("angka yang kamu berikan adalah ganjil\n");
  // }

  // int nilai_kita = 13;
  //
  // if (nilai_kita >= 10 && nilai_kita <= 22) {
  //   printf("nilai kita berada dalam rentang 10 dan 22\n");
  // } else {
  //   printf("angka kita tidak dalam rentang 10 dan 22\n");
  // }

  // int nilai_kita = -23;
  //
  // if (nilai_kita > 0) {
  //   if (nilai_kita % 2 == 0) {
  //     printf("angka yang kamu berikan ini adalah positif dan juga genap\n");
  //   } else {
  //     printf("nilai kamu adalah ganjil dan juga positif\n");
  //   }
  // } else {
  //   printf("angkanya harus positif ya!\n");
  // }

  int nilai;
  printf("masukkan nilai ujian siswa (0 - 100): ");
  scanf("%d", &nilai);
  
  if (nilai >= 90) {
    printf("nilainya adalah A\n");
  } else if (nilai >= 80) {
    printf("nilainya B\n");
  } else {
    printf("nilainya adalah C\n");
  }

  return 0;
}
