// goto nama_label;
// ....
// ....
// nama_label:
//  ...
#include <stdio.h>

int main() {
  //   int angka;
  //
  //   printf("masukkan angka yang kamu ingin: ");
  //   scanf("%d", &angka);
  //
  //   if (angka < 0) {
  //     goto negatif;
  //   } else {
  //     goto positif;
  //   }
  //
  //
  // positif:
  //   printf("angka kamu adalah positif\n");
  //   goto akhiran;
  //
  // negatif:
  //   printf("angka kamu adalah negatif\n");
  //
  // akhiran:
  //   printf("fungsi goto berakhir\n");

  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      printf("nilai i = %d, j = %d\n", i, j);

      if (i == 2 && j == 2) {
        printf("kita akan keluar dari nested looping dengan fungsi goto\n");
        goto keluar_dari_looping;
      }
    }
  }

keluar_dari_looping:
  printf("kamu sudah keluar dari neseted looping\n");

  return 0;
}
