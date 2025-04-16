// sizeof(tipe_data);
// sizeof(variabel_ekspesi) size_t -> jumlah byte -> unsigned nilai
#include <stdio.h>

int main() {
  // printf("ukuran tipe data dari double adalah: %zu byte\n", sizeof(double));

  // int angka_kita = 42;
  // printf("ukuran dari variabel angka (tipe data integer) adalah: %zu byte\n ",
         // sizeof(angka_kita));
  int angka = 10;
  double angka_kedua = 3.14;
  printf("ukuran dari ekspresinya adalah: %zu byte\n", sizeof(angka * angka_kedua));

  return 0;
}
