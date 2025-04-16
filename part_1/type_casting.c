// implicit type casting -> kompiler otomatis mengubah
// explicit type casting
// (tipe_data) nilainya_atau_tipe_datanya
// (float) 9 
#include <stdio.h>

int main() {
  // int nilai = 5;
  // float nilai_kedua = 2.5;
  // char karakter = 'a';
  //
  // // implicit
  // // float hasil = nilai + nilai_kedua;
  // // explicit
  // int hasil = (int) nilai_kedua + nilai;
  // int kode_ascii = (int) karakter;
  // printf("hasilnya adalah: %d\n", hasil);
  // printf("kode ascii dari %c adalah: %d\n", karakter, kode_ascii);

  // int a = 10;
  // double b = 3.5;
  //
  // double hasil = a + b;
  // int truncation_explicit = (int) b * a;
  // printf("hasilnya adalah: %d\n", truncation_explicit);

  int total = 25, jumlah = 4;

  float rata_rata = (float) total / jumlah;
  printf("hasil rata-rata adalah: %.2f\n", rata_rata);

  return 0;
}
